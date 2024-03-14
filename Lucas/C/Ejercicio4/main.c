#include <stdio.h>
#include "complex.h"

int main(void){

    Complex c1 = {1 , 2};
    Complex c2 = {0.3 , 2.4};
    Complex c3;
    float modulo;
    float size;

    imprimirComplex(c1);
    c3 = sumaComplex(c1 ,c1);
    imprimirComplex(c3);

    modulo = moduloComplex(c1);
    printf("El modulo del c1 es: %2.f \n", modulo);

    size = sizeComplex(c1);
    printf("El tamano que ocupa c1 en memoria es: %2.f", size);

    return 0;
}