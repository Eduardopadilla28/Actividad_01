#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int a,b,c;
float x,r1,r2;

int main (void)
{
	printf("Inserte el valor cuadratico de su ecuacion\n");
	scanf("%d",&a);
	if(a==0)
	{
		printf(" Esta ecuacion no se puede resolver\n");
	}
	else
	{
	printf("Inserte el valor lineal de su ecuacion\n");
	
	scanf("%d",&b);
	
	printf("Inserte el valor independiente de su ecuacion\n");
	
	scanf("%d",&c);
	
	x=pow(b,2)-4*a*c;
	
	if(x<0)
	
	{

	
	printf("No se puede realizar la operacion\n");
	
	}
	
	else
	
	{

	
	r1=((-b+sqrt(x))/(2*a));
	r2=((-b-sqrt(x))/(2*a));
	
	printf("Los resultados de tu ecuacion cuadratica son x1 =  %.3f y x2 =  %.3f",r1,r2);	
	}
	}
}

