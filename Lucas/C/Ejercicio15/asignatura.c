#include <stdio.h>
#include "asignatura.h"

void printAsignatura(Asignatura a){
    printf("Id: %d, nota: %.2f.\n", a.id, a.nota);
}

float calcularMedia(Asignatura* asignaturas, int cont){
    float total;
    for(int i = 0; i < cont; i++){
        total += asignaturas[i].nota;
    }

    return total/cont;
}