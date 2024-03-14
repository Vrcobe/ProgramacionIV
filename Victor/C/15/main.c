#include <stdio.h>
#include <string.h>

typedef struct{
    int id;
    float nota;
}asignatura;

int main(void)
{
    char letra ;
    asignatura asignaturas[5];
    do{
        printf("1.Introducir asignatura\n2.MostrarListado\n3.Calcular media\nIntroduce q para salir\nIntroduce la opcion seleccionada:");
        scanf("%c",&letra);
        fflush(stdin);
        
        switch(letra){
            case '1':
                printf("Introduce el identificador de la asignatura : ");
                char nombre[15];
                int id;
                fgets(nombre,15,stdin);
                sscanf(nombre,"%d",&id);
                printf("Introduce la nota de la asignatura:");
                fgets(nombre,15,stdin);
                float nota;
                sscanf(nombre,"%f",&nota);
                printf("%f",nota); 
            case 'q':
                printf("Saliendo");
               break;
            default:
             break;

        }
    }while(letra!='q');
}