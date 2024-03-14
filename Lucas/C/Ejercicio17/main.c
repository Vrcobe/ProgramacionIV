#include <stdio.h>
#include <stdlib.h>

#define X 5
#define Y 3

void func1(int a[X][Y])
{
	int i, j;
	for (i = 0; i < Y; i++)
	{
		for (j = 0; j < X; j++)
			printf("%d ", a[j][i]);
		printf("\n");
	}
}

void func2(int *a[X])
{
    int i, j;
	for (i = 0; i < Y; i++)
	{
		for (j = 0; j < X; j++)
			printf("%d ", a[j][i]);
		printf("\n");
	}
	printf("\n");
}

void func3()
{
    
}