#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main ()
{
	int i=0, media=0, num [5];
	
	for (i=0;i<5;i++)
	{
		printf("\nInforme a nota do aluno: ");
		scanf("%i", &num[i]);
		media+=num[i] /5 ;
		if (num[i] >= 7)
	{
		printf("Aprovado");
	}else
	{
		printf("Reprovado");
	}
	}
	printf("\nA media e: %i", media);
	
}
