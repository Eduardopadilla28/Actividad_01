#include <stdlib.h>
#include <stdio.h>


int a;

int main (void)
{
	printf("\nDame un numero\n");
	scanf("%d",&a);
	
	if (a%2==0)
	printf("\nEl numero %d es par\n\n",a);
	else
	printf("\nEl numero %d es impar\n\n",a);
	
	system("pause");
}
