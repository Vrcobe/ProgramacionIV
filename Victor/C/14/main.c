#include <stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    printf("%d",argc);
    for(int i = 0;i<argc;i++)
    {
        printf("Argumento %d: %s\n",i,argv[i] );
    }
    int comparacion = strcmp(argv[1],argv[2]);
    printf("Comparacion de los dos primeros argumentos %d " , comparacion);

}