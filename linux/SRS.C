#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include <stdlib.h>

void shell(char* doppy) {
    FILE *file;

    file = fopen("C:\\INPUT.TXT", "w");

    if (strcmp(doppy, "exit") == 0){
        return 0;
    }

    fprintf(file, "%s\n", doppy);

    fclose(file);

    delay(2000);

    file = fopen("C:\\OUTPUT.TXT", "r");

    while (fgets(doppy, sizeof(doppy), file) != NULL) {
        printf("%s", doppy);
    }
    

    fclose(file);

}
