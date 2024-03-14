#include "complex.h"
#include <stdio.h>
#include "math.h"

void imprimirComplex(Complex a){
    printf("Parte real: %2.f  Parte imaginaria: %2.f \n", a.r, a.i);
}

Complex sumaComplex(Complex a, Complex b){
    Complex result;

    result.i = a.i + b.i;
    result.r = a.r + b.r;

    return result;
}

float moduloComplex(Complex a){
    float result;

    result = sqrt(a.r*a.r + a.i*a.i);

    return result;
}

float sizeComplex(Complex a){
    return sizeof(a.r)+sizeof(a.i);
}