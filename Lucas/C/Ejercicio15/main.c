#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "asignatura.h"


int main(void)
{
    char* entrada;
    Asignatura asignaturas[5];
    int cont = 0;

    do{
        printf("1. Introducir asignatura.\n2. Mostrar listado.\n3. Calcular media.\nPulsar 'q' para salir.\n");
        scanf("%c", entrada);
        //fgets(*entrada, sizeof(*char), stdin);

        if(*entrada == '1')
        {
            if(cont <= 5){
                int id;
                float nota;

                printf("Digite el id de la nueva asignatura: \n");
                scanf("%d", &id);

                printf("Digite la nota en la asignatura: \n");
                scanf("%f", &nota);
                fflush(stdin);

                Asignatura a = {id, nota};
                asignaturas[cont] = a;
                cont++;
            }else{
                printf("Usted ha alcanzado el máximo de asignaturas permitidas.\n");
            }
            
        }
        else if (*entrada == '2')
        {
            for(int i = 0; i < cont; i++){
                printAsignatura(asignaturas[i]);
            }
        }
        else if (*entrada =='3')
        {
            float media = calcularMedia(asignaturas, cont);
            printf("La media de las asignaturas es: %.2f.\n", media);
        }
        else if (*entrada == 'q')
        {
            printf("Gracias por su confianza.");
        }
        else
        {
            printf("Por favor digite alguna instruccion existente.\n");
        }
 
    }while (*entrada != 'q');
    return 0;
}