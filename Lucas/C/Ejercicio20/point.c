#include <stdio.h>
#include "point.h"

void escribirPoint(Point* puntos, int size)
{
    FILE* file = fopen("puntos.dat","wb");

    fwrite(puntos, sizeof(Point), size, file);

    fclose(file);
}

Point* leerPoint(int size)
{
    Point* puntos;

    FILE* file = fopen("puntos.dat", "rb");

    fread(puntos, sizeof(Point), size, file);

    return puntos;
}

void printPoint(Point p)
{
    printf("X: %.2f, Y: %.2f.\n", p.x, p.y);
}