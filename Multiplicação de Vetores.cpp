#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*Dada duas seqüências de 5 números, 
calcule a soma de cada número com o seu correspondente.*/

main()
{
	int a [6], b[6], i=0;
	
	for (i=1;i<6;i++)
	{
		printf("Informe 5 numeros: ");
		scanf("%i", &a[i]);
		a[0]+=a[i];
	}
	printf("O resultado da soma destes numeros e: %i", a[0]);
	
	for (i=0;i<5;i++)
	{
		printf("\nInforme mais 5 numeros: ");
		scanf("%i", &b[i]);
		b[5]+=b[i];
	}
	printf("%i", b[5]);
}



