#include <SoftwareSerial.h>

const int ARRAY_SIZE = 1024;

SoftwareSerial mySerial = SoftwareSerial(10, 11);

void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
    mySerial.begin(9600);
    Serial.begin(9600);
}

void loop()
{
    while (mySerial.available()) {
        static int rc = 0;
        static String string = "";

        char inChar = mySerial.read();
        switch (inChar) {
        case '[': rc++; break;
        case ']': rc--; break;
        case '#': asm ("jmp 0");
        }
        string += inChar;

        if (!rc) {
            digitalWrite(LED_BUILTIN, HIGH);
            interpret((char*) string.c_str());
            digitalWrite(LED_BUILTIN, LOW);
            string = "";
        }
    }
}

void interpret(char* ip)
{
    while (*ip) {
        static char array[ARRAY_SIZE];
        static char* ptr = array;

        switch (*ip++) {
        case '>': ++ptr; break;
        case '<': --ptr; break;
        case '+': ++*ptr; break;
        case '-': --*ptr; break;

        case '.':
            Serial.write(*ptr);
            break;

        case ',':
            while (!Serial.available()) ;
            *ptr = Serial.read();
            if (*ptr == '\r') *ptr = 0;
            break;

        case '[':
            if (!*ptr) {
                int rc = 1;
                do {
                    switch (*ip++) {
                    case '[': rc++; break;
                    case ']': rc--; break;
                    }
                } while (rc);
            }
            break;

        case ']':
            if (*ptr) {
                ip--;
                int rc = 1;
                do {
                    switch (*--ip) {
                    case ']': rc++; break;
                    case '[': rc--; break;
                    }
                } while (rc);
                ip++;
            }
            break;
        }

        if (ptr < array)
            ptr += ARRAY_SIZE;
        else if (ptr == array + ARRAY_SIZE)
            ptr = array;
    }
}
