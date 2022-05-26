#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Gerar um vetor com 10 números da seguinte forma:
cada número guardado no vetor será o valor da sua própria 
posição no vetor (seu índice) menos 2 (ou seja, Xi = i-2). 
Mostrar na tela este vetor.*/

main()
{
	int x[10], i;

	for (i=0;i<10;i++)
	{
		x[i]=i - 2;
	}
	for (i=0;i<10;i++)
	{
		printf("posicao no vetor: %i posicao com -2: %i\n", i, x[i]);
	}
}
