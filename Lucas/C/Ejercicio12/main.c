#include <stdio.h>
#include <stdlib.h>
#include "fraccion.h"

int main(void)
{
    int entero = 0;

    int *aEntero = &entero;

    Fraccion *aFraccion;

    Fraccion fraccionDinamica = (Fraccion *)malloc(sizeof(Fraccion));
    aFraccion = fraccionDinamica;

    fraccionDinamica->denominador = 2;
    fraccionDinamica->numerador = 1;

    

    return 0;
}