SCREEN 11
CLS
FOR Y% = 1 TO 480
    FOR X% = 1 TO 640
        F% = X% + Y% AND INT(SQR(ABS(X% - Y%)))
        IF F% <> 0 THEN PSET (X%, Y%), 15
    NEXT X%
NEXT Y%
SLEEP
END

