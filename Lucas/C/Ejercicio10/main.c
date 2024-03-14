#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

int main(void)
{
    Complex c1 = {1, 2};
   
    Complex *c2 = (Complex*) malloc(sizeof(Complex));
    c2->r = 1.3;
    c2->i = 0.5;

    printComplex(&c1);

    Complex c3;
    c3 = suma(c1, c2);
    printComplex(&c3);

    free(c2);
}