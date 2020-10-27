#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define Pi 3.1415926
float r,a,p;

int main (void)
{
	printf("\n\nEscriba el valor del radio de su circulo\n");
	scanf("%f",&r);
	a=Pi*pow(r,2);
	p=2*Pi*r;

	printf("\n\nEl area de tu circulo es  %f  y el perimetro es  %f\n\n\n",a,p);

}

