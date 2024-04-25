#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // It is a variable that stores a memory direction
    char *str;
    int num = 11;
    int *deref_num = &num;
    printf("&u\n", &num);
    printf("&u\n", deref_num);

    // str = (char *)malloc(sizeof(char) * 15);

    // strncpy(str, "This is a string", sizeof(str));

    // printf("String = %s, adress %u\n", str, str);

    // // Changes the size of the block pointed by the first argument.

    // str = (char *) realloc(str, sizeof(char) * 20);

    // strcat(str, " more large");

    // printf("String = %s, adress %u\n", str, str);

}