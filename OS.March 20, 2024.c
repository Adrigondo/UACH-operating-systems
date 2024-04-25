/**
 * This are libraries (bibliotecas no librerias)
 * The header files provide us to the headers of the function
 * that a library has.
 * */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    char file = "etc/passwd";
    FILE *filePtr;
    if ((filePtr==fopen(file, "r"))==NULL)
    {
        printf("ERROR: File (%s) cannot be opened. ºn", file);

        exit(1);
    }
    char ch;
    while ((ch=fgetc(filePtr))!=NULL){
        printf("%c", ch);
    }
    fclose(filePtr);
}