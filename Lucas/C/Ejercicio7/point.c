#include <stdio.h>
#include "point.h"

void escalar(Point *p, int i)
{
    int cont = i;

    while(cont > 0){
        p->x = (p->x * p->x);
        p->y = (p->y * p->y);
        cont--;
    }

    printf("El punto escalado es igual a: %d, %d.", p->x, p->y);
}