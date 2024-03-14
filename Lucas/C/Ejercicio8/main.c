#include <stdio.h>
#include "complex.h"

int main(void)
{
    Complex c1 = {1, 2};
    Complex c2 = {1.5, 3.1};

    printComplex(&c1);

    Complex c3;
    c3 = suma(&c1, &c2);
    printComplex(&c3);
}