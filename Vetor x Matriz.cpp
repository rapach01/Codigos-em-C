#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>
/*Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 elementos.
 Em seguida o programa deve fazer a multiplicação do vetor pelas colunas da matriz.*/
 
vetmat(){
	int vet[3], matriz[3][3], i, c;
	
	for(i=0;i<3;i++){
		for(c=0;c<3;c++){
			printf("Informe o numero da matriz na posicao [%i] [%i]: ", i, c);
			scanf("%i", &matriz[i][c]);
		}
	}
	for(i=0;i<3;i++){
		printf("\n");
		for(c=0;c<3;c++){
			printf("[%i]", matriz[i][c]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		printf("Informe o numero da vetor na posicao [%i]: ", i);
		scanf("%i", &vet[i]);
	}
	for(i=0;i<3;i++){
		printf("[%i]", vet[i]);
	}
	for(i=0;i<3;i++){
		for(c=0;c<3;c++){
			matriz[i][c]*=vet[i];
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		printf("\n");
		for(c=0;c<3;c++){
			printf("[%i]", matriz[i][c]);
		}
	}
}
main(){
	vetmat();
}
