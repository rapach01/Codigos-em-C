#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main () 
{
	int b;
	
	printf ("Informe um numero\n");
	scanf("%d", &b);

	if (b > 0)
	{
		printf ("Numero Positivo");
	}
	else
	{
		printf("Numero Negativo");
	}
	b %= 2;
	if (b == 0 )
	{
		printf(" e Par");
	}
	else 
	{
		printf(" e Impar");
	}
	
}
