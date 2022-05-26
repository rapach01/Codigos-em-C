/*2) Faça um algoritmo que leia 10 valores e  imprima no final a multiplicação de todos eles;*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
main ()
{
	int vet[10], i;

	printf("Informe  10 numeros\n");
	for (i=0;i<=10;i++)
	{
	scanf ("%i", &vet[i]);
	}
	for (i=1;i<10;i++)
	{
		vet[0]*=vet[i];		
	}
	printf("%i", vet[0]);
}



