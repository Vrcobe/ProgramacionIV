#ifndef ASIGNATURA_H
#define ASIGNATURA_H

typedef struct
{
    int id;
    float nota;
} Asignatura;

void printAsignatura(Asignatura a);
float calcularMedia(Asignatura* asignaturas, int cont);

#endif