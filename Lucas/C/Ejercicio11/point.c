#include <stdio.h>
#include "point.h"

void escalar(int enteros[], Point *puntos, int size)
{
    for(int c = 0; c < size; c++){
        puntos[c].x = puntos[c].x * enteros[c];
        puntos[c].y = puntos[c].y * enteros[c];
    }
}