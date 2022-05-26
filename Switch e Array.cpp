#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>

matrizes(){
	int c, i, j, matriz1[3][3], matriz2[3][3], resultado[3][3];
	const int constante=5;
	
	printf("Informe qual das opcoes de matrizes voce deseja:\n(1)Para somar 2 matrizes\n(2)Para Subtrair 2 matrizes\n(3)Adicionar Constante\n ");
	scanf("%i", &c);
	
	switch (c){
		case 1:{
			system("cls");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("Informe os numeros da matriz 1 na posicao [%i] [%i]: ", i,j);
					scanf("%i", &matriz1[i][j]);
				}
			}
			system("cls");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("Informe os numeros da matriz 2 na posicao [%i] [%i]: ", i,j);
					scanf("%i", &matriz2[i][j]);
				}
			}
			system("cls");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					resultado [i][j]=matriz2[i][j] + matriz1[i][j];
				}
			}
			for(i=0;i<3;i++){
				printf("\n");
				for(j=0;j<3;j++){
					printf("[%i]", resultado [i][j]);
				}
			}
			break;
		}
		case 2:{
			system("cls");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("Informe os numeros da matriz 1 na posicao [%i] [%i]: ", i,j);
					scanf("%i", &matriz1[i][j]);
				}
			}
			system("cls");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("Informe os numeros da matriz 2 na posicao [%i] [%i]: ", i,j);
					scanf("%i", &matriz2[i][j]);
				}
			}
			system("cls");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					resultado [i][j]=matriz1[i][j]-matriz2[i][j];
				}
			}
			for(i=0;i<3;i++){
				printf("\n");
				for(j=0;j<3;j++){
					printf("[%i]", resultado [i][j]);
				}
			}
			break;
		}
		case 3:{
			system("cls");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("Informe os numeros da matriz 1 na posicao [%i] [%i]: ", i,j);
					scanf("%i", &matriz1[i][j]);
				}
			}
			system("cls");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("Informe os numeros da matriz 2 na posicao [%i] [%i]: ", i,j);
					scanf("%i", &matriz2[i][j]);
				}
			}
			system("cls");
			for(i=0;i<3;i++){
				printf("\n");
				for(j=0;j<3;j++){
					matriz1[1][2]=constante;
				}
			}
			for(i=0;i<3;i++){
				printf("\n");
				for(j=0;j<3;j++){
					matriz2[2][2]=constante;
				}
			}
			printf("Primeira Matriz: \n");
			for(i=0;i<3;i++){
				printf("\n");
				for(j=0;j<3;j++){
					printf("[%i]", matriz1[i][j]);
				}
			}
			printf("\n");
			printf("Segunda Matriz: \n");
			for(i=0;i<3;i++){
				printf("\n");
				for(j=0;j<3;j++){
					printf("[%i]", matriz2[i][j]);
				}
			}
			break;
		}
		
	}
}
main(){
	matrizes();
}
