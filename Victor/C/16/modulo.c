#include <stdio.h>

typedef struct{
        int x;
        int y;
    } Punto;

int main(void)
{

    Punto puntos[3][4][5];
    puntos[2][3][1].x = 3;
    puntos[2][3][1].y = 4;

    printf("%d, %d ",puntos[2][3][1].x, puntos[2][3][1].y);
    
}