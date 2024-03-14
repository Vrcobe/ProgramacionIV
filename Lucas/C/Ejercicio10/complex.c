#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

void printComplex(Complex *c)
{
    printf("Parte real: %2.f, parte imaginaria: %2.f. \n", c->r, c->i);
}


Complex suma(Complex c1, Complex *c2)
{
    Complex result = {c1.r + c2->r, c1.i + c2->i};
    
    return result;
}