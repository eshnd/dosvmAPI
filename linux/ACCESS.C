#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *file;
    char doppy[100];

    if (argc < 2) {
        printf("enter a linux command as an argument");
        return 1;
    }

    file = fopen("C:\\INPUT.TXT", "w");

    fprintf(file, "%s\n", argv[1]);

    fclose(file);

    delay(2000);

    file = fopen("C:\\OUTPUT.TXT", "r");

    while (fgets(doppy, sizeof(doppy), file) != NULL) {
        printf("%s", doppy);
    }
    

    fclose(file);

    return 0;
}
