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

int main(void)
{
    
}