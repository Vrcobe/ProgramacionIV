#include "punto.h"
#include <stdio.h>

int main(void)
{
    FILE* fichero = fopen("numerosb.txt","r");
    Punto puntos[3];
    fread(puntos,sizeof(Punto),3,fichero);
    fclose;
    for(int i = 0;i<3;i++)
    {
        printf("x: %.2f y: %.2f",puntos[i].x,puntos[i].y);
    }
    return 0;
}