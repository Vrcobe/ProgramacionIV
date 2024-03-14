#include <stdio.h>

#define N 10

int main(void)
{
    FILE* fichero = fopen("numeros.txt","w");

    for(int i = 0; i <= N ; i++){
        fprintf(fichero,"%d\n", i);
    }

    fclose(fichero);
}