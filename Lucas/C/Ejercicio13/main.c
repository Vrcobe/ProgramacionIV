#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char w[] = "Hola mundo";

    for(int i = 0; i < strlen(w) ; i++){
        printf("%c \n", w[i]);
    }

    int size = strlen(w);

    char *copia;
    char *strcpy(copia , &w);

    char *strcat(copia, &w);   

    return 0;
}