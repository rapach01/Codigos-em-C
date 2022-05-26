#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>
/*4. Faça um programa que lê uma matriz de 3 x 3 elementos usando um comando for,
multiplica cada elemento por 5 e imprime o resultado.*/

porcinco(){
	int i, c, matriz[3][3];
	
	for(i=0;i<3;i++){
		for(c=0;c<3;c++){
			printf("Informe o numero da matriz na posicao [%i] [%i]: ", i, c);
			scanf("%i", &matriz[i][c]);
		}
	}
	system("cls");
	for(i=0;i<3;i++){
		printf("\n");
		for(c=0;c<3;c++){
			printf("[%i]", matriz[i][c]);
		}
	}
	for(i=0;i<3;i++){
		for(c=0;c<3;c++){
			matriz[i][c]*=5;
		}
	}
	printf("\n");
	printf("Os numeros da matriz multiplicados por 5 ficam:\n");
	for(i=0;i<3;i++){
		printf("\n");
		for(c=0;c<3;c++){
			printf("[%i]", matriz[i][c]);
		}
	}
	
	
}
main(){
	porcinco();
}
