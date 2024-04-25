/**
 * This are libraries (bibliotecas no librerias)
 * The header files provide us to the headers of the function
 * that a library has.
 * */
#include <stdio.h>
#include <stdlib.h>

// Function to read a single line from the file
int readLine(FILE *filePtr, char *lineBuffer, int bufferSize) {
    char ch;
    int i = 0;

    // Read until end of line or end of file
    while ((ch = fgetc(filePtr)) != '\n' && ch != EOF) {
        // Store character in buffer
        if (i < bufferSize - 1) {
            lineBuffer[i++] = ch;
        }
    }

    // Add null terminator to make it a valid string
    lineBuffer[i] = '\0';

    // Return 1 if a line was read, 0 otherwise
    return i > 0;
}

// Function to read the file line by line
void readFileLineByLine(const char *filename) {
    FILE *filePtr;
    char line[1000]; // Assuming maximum line length is 1000 characters

    if ((filePtr = fopen(filename, "r")) == NULL) {
        printf("ERROR: File (%s) cannot be opened.\n", filename);
        exit(1);
    }

    // Read each line and print it
    while (readLine(filePtr, line, sizeof(line))) {
        printf("%s\n", line);
    }

    fclose(filePtr);
}

int main(int argc, char **argv)
{

    if(argc<2){
        printf("ERROR: Filename is required");
    }

    char *file = argv[1];
    
    readFileLineByLine(file);
}