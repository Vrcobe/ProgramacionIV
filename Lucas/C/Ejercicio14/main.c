#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    printf("%d", argc);

    for(int i = 0; i<argc ; i++){
        printf("%s", argv[i]);
    }

    int comp = strcmp(argv[1], argv[2]);
    printf("Comparacion de dos argumentos: %d. \n", comp);
}