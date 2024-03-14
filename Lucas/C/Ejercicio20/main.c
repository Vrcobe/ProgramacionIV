#include <stdio.h>
#include "point.h"

int main(void)
{
    Point puntos[4];

    puntos[0].x = 1;
    puntos[0].y = 1;
    puntos[1].x = 1;
    puntos[1].y = 2;
    puntos[2].x = 2;
    puntos[2].y = 2;
    puntos[3].x = 2;
    puntos[3].y = 3;

    escribirPoint(puntos, 4);

    printf("%s\n", "Escrito.");

    Point* leidos = leerPoint(4);

    for(int i=0; i<4; i++){
        printPoint(leidos[i]);
        printf("%s", "-----");
        printPoint(puntos[i]);
    }
}