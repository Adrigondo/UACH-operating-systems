/**
 * This are libraries (bibliotecas no librerias)
 * The header files provide us to the headers of the function
 * that a library has.
 * */
#include <stdio.h>
#include <stdlib.h>
/**
 * argc es la cantidad de argumentos
 * argv es la lista de argumentos
 */
int main(int argc, char *argv)
{
    FILE *filePtr;

    if(argc<2){
        printf("ERROR: Filename is required");
    }

    char *file = argv[1];

    if ((filePtr == fopen(file, "r")) == NULL)
    {
        printf("ERROR: File (%s) cannot be opened. ºn", file);

        exit(1);
    }
    char ch;
    while ((ch = fgetc(filePtr)) != NULL)
    {
        printf("%c", ch);
    }
    fclose(filePtr);
}