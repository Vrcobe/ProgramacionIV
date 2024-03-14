#include <stdio.h>
#include <stdlib.h>
#include "point.h"

int main(void)
{
    printf("ARRAY");

    int enteros [3] = {1, 2, 3};

    Point *puntos = (Point*) malloc(3* sizeof(Point));
    puntos[0].x = 0;
    puntos[0].y = 0;
    puntos[1].x = 1;
    puntos[1].y = 0;
    puntos[2].x = 1;
    puntos[2].y = 1;

    int size = 3;
    escalar(enteros, puntos, size);

    printf("El último punto ya escalado es: %s x, %s y." ,puntos[2].x, puntos[2].y);

    free(puntos);
    
    return 0;
}