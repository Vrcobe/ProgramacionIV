#include <stdio.h>
#include "punto.h"
int main(void)
{
    FILE* fichero = fopen("numerosb.txt","wb");
    Punto puntos[3] ;
    puntos[0].x=1;
    puntos[0].y=2;
    puntos[1].x=3;
    puntos[1].y=4;
    puntos[2].x=5;
    puntos[2].y=6;

    fwrite(puntos,sizeof(Punto),3,fichero);
    fclose(fichero);
    return 0;

}