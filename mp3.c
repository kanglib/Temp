#include <stdint.h>
#include <stdio.h>
#include <string.h>

#pragma pack(1)
typedef struct ID3V1_ {
    char    Tag[3];
    char    Title[30];
    char    Artist[30];
    char    Album[30];
    char    Year[4];
    char    Comment[30];
    uint8_t Genre;
} ID3V1;

int main(int argc, char **argv)
{
    FILE *mp3;
    ID3V1 id3V1;
    char buffer[31] = { 0 };

    if (argc != 2) {
        printf("Usage: mp3 input.mp3\n");
        return -1;
    }

    mp3 = fopen(argv[1], "rb");
    if (!mp3) {
        return -2;
    }

    fseek(mp3, -128, SEEK_END);
    fread(&id3V1, 1, 128, mp3);
    if (id3V1.Tag[0] != 'T' || id3V1.Tag[1] != 'A' || id3V1.Tag[2] != 'G') {
        return -3;
    }

    memcpy(buffer, id3V1.Title, 30);
    printf("Title: %s\n", buffer);
    memcpy(buffer, id3V1.Artist, 30);
    printf("Artist: %s\n", buffer);
    memcpy(buffer, id3V1.Album, 30);
    printf("Album: %s\n", buffer);
    memcpy(buffer, id3V1.Year, 4);
    buffer[4] = '\0';
    printf("Year: %s\n", buffer);
    memcpy(buffer, id3V1.Comment, 30);
    printf("Comment: %s\n", buffer);
    printf("Album track: %u\n", buffer[29]);
    printf("Genre: %u\n", id3V1.Genre);

    fclose(mp3);
    return 0;
}
