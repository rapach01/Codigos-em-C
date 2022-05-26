#include <stdio.h>
#include <locale.h>
main() {
 
	int linha, coluna, i, c;
 
 	printf("informe o número de linhas e colunas:");
 	scanf("%d%d", &linha, &coluna);
 
 	int mat[linha][coluna];
 	
	for (i=0; i<linha; i++)
		for(j=0; j<coluna; j++){
 		printf("informe a posição [%d, %d]", i, j);
 		scanf("%d",&mat[i][j]);
		}
 	
	for (i=0; i<linha; i++) {
 		printf("\n");
 	for(j=0; j<coluna; c++)
 		printf("[%4d]", mat[i][j]);
 }
}
