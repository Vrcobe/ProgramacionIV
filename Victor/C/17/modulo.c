#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int x,y;
    x=3;
    y=4;
    
    int b[x][y];
    int *c[x];
    int **a;

    for(int i = 0; i<x;i++)
    {
        c[x]=(int*) malloc(sizeof(int)*y);
    }




    a = (int**) malloc(sizeof(int*)*x);
        for(int j = 0; j<x;j++){
            a[j]= malloc(sizeof(int)*y);
        }
    
    for(int i = 0; i<x;i++)
    {
        for(int j = 0; j<y; j++)
        {
            a[i][j]=2;
            b[i][j]=1;
            c[i][j]=3;
        }
    }
    
    for(int i = 0; i<x;i++)
    {
        for(int j = 0; j<y; j++)
        {
            printf("%d",a[i][j]);
            printf("%d",b[i][j]);
            printf("%d",c[i][j]);
        }
    }
    
    for(int j = 0; j<x;j++){
         free(a[j]);
        }

    free(a);
    for(int i = 0; i<x ; i++){
        free(c[i]);
    }

}