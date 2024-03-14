#include<stdio.h>
#define N 15


int main(void)
{
    FILE* fichero = fopen("numeros.txt","w");
    for(int i = 0; i<=N ;i++){
        fprintf(fichero,"%d\n",i);
    }

    fclose(fichero);

    fichero = fopen("numeros.txt","r");
    int i =0;
    for(char c = fgetc(fichero); c!= EOF; c = fgetc(fichero),printf("%c"),c)
    {
        if(c!='\n')
        {
            i++;
        }
    }
    printf("%d",i);
}