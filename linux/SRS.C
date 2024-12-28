#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include <stdlib.h>

// why so serious? jonkler appears and starts doing silly dances. i am so sleepy its like 14 am here :D

char* shell(char* doppy) {
    FILE *file;

    file = fopen("C:\\INPUT.TXT", "w");

    if (strcmp(doppy, "exit") == 0){
        return "exit";
    }

    fprintf(file, "%s\n", doppy);

    fclose(file);

    delay(2000);

    file = fopen("C:\\OUTPUT.TXT", "r");

    while (fgets(doppy, sizeof(doppy), file) != NULL) {
            return doppy;
    }
    

    fclose(file);

}
