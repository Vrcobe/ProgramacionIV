#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct{
    float r;
    float i;
} Complex;

void imprimirComplex(Complex a);
Complex sumaComplex(Complex a, Complex b);
float moduloComplex(Complex a);
float sizeComplex(Complex a);

#endif