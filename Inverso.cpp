#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*Ler 5 números, armazenando-os no vetor X[5].
 Copiar este vetor, de trás para frente (na ordem inversa de leitura)
 , em um segundo vetor Y[5]. Mostrar o vetor Y.*/

main()
{
	int x[5],y[5], i=0;
	
	for (i=0;i<5;i++)
	{
		printf("Informe 5 numeros: ");										
		scanf("%i", &x[i]);														
	}
	for (i=4;i>=0;i--)
	{
		printf("\nA ordem inversa e: %i\n", x[i]);	
	}
}

