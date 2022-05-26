#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main ()
{
	int num=0, soma=0, vezes=0, i=0;
	
	printf("Quantos numeros voce quer digitar?\n");
	scanf("%i", &vezes);
	
	while (i < vezes)
	{
		printf("Informe os numeros: ");
		scanf("%i", &num);
		i++;
		soma+=num;
	}
	
	printf("O valor da sua soma e: %i", soma);
}
