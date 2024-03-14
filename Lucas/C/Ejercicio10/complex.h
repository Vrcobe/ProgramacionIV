#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct 
{
    float r;
    float i;
}Complex;

void printComplex(Complex *c);
Complex suma(Complex c1, Complex *c2);

#endif