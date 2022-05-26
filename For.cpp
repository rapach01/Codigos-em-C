#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main ()
{
	int num=0, soma=0, vezes=0, i=0;
	
	printf("Quantos numeros voce quer digitar?\n");
	scanf("%i", &vezes);
	
	for (i=num;i<vezes;i++)
	{
		printf("Informe os numeros: ");
		scanf("%i", &num);
		soma+=num;
	}
	printf("O valor da sua soma e: %i", soma);
}
