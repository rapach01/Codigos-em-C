#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Gerar um vetor com 10 n�meros da seguinte forma:
cada n�mero guardado no vetor ser� o valor da sua pr�pria 
posi��o no vetor (seu �ndice) menos 2 (ou seja, Xi = i-2). 
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
