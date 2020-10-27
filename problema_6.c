#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int a,b;
float c;

int main(void)
{
	printf("Escribe el numerador ");
	scanf("%d",&a);
	printf("Escribe el denominador");
	scanf("%d",&b);
	c=a/b;
	printf("El cociente de %d entre %d es %f",a,b,c);
}

