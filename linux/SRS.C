// why so serious? jonkler appears and starts doing silly dances. i am so sleepy its like 14 am here :D
#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

char* shell(char* doppy) {
    FILE *file;
    char *output = malloc(1);  // have to use mallocs ........ i hate c
    output[0] = '\0';

    if (strcmp(doppy, "exit") == 0) {
        free(output);
        return "exit";
    }

    file = fopen("C:\\INPUT.TXT", "w");
    fprintf(file, "%s\n", doppy);
    fclose(file);

    delay(2000);

    file = fopen("C:\\OUTPUT.TXT", "r");

    while (fgets(doppy, 256, file) != NULL) {
        size_t current_length = strlen(output);
        size_t new_length = current_length + strlen(doppy) + 1;
        output = realloc(output, new_length); // c++ >>>>>
        strcat(output, doppy);
    }

    fclose(file);

    return output;
} // this will always appear with abnormal program termination and null pointer assignment, but it still works so fuck it lol
// if someone manages to fix that i would be super appreciative :DDD
