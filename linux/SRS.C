#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dos.h>

char* shell(char* doppy, int mem) {
    FILE *file;
    char temp[256];
    char *out2 = malloc(mem);
    out2[0] = '\0';

    file = fopen("C:\\INPUT.TXT", "w");
    fprintf(file, "%s\n", doppy);
    fclose(file);

    delay(2000);

    file = fopen("C:\\OUTPUT.TXT", "r");
    while (fgets(temp, 256, file)) {
        strcat(out2, temp);
    }
    fclose(file);

    return out2;
}

