#include <stdio.h>

int main(void){
    printf("Ejercicio 3 \n");

    char c;
    do{
        printf("Introduzca un caracter: \n");
        c = getchar();
        if (c != '\n'){
            printf("Has introducido la letra: %c \n", c);
        }
    }
    while (c != 'q');
    printf("Has introducido la letra: %c \n", c);
    return 0;
}

// A-a -> diferencia a restar para hacer el cambio 'ASCI'