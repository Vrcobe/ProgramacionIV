#ifndef POINT_H
#define POINT_H

typedef struct {
    float x;
    float y;
} Point;

void escribirPoint(Point* puntos, int size);
Point* leerPoint(int size);
void printPoint(Point p);

#endif