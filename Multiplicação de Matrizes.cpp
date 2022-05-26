#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>

/*2) Leia uma matriz 3x2 e outra 2x3 de números double.
Imprima o produto destas duas matrizes.*/

matriz(){
	//variaveis
	double a[3][2], b[2][3], r[3][3];
	int i=0, c=0;
	
	for(i=0; i<3; i++){  			//scan matriz a
		for(c=0; c<2; c++){
		printf("Informe o valor para matriz A[%d][%d]:", i, c);
		scanf("%lf", &a[i][c]);
		}
	}
	printf("\n");
	
	for(i=0; i<2; i++){      	//scan matriz b
		for(c=0; c<3; c++){
		printf("Informe o valor para matriz B[%d][%d]:", i, c);
		scanf("%lf", &b[i][c]);  		
		}
	}
	printf("\n");

	for (i=0; i<3; i++) { //produto
		for (c=0; c<2; c++) { 
		r[i][c] = a[i][c] * b[c][i]; 
		printf("%.1lf\t", r[i][c]); 
		}
	}
}
main(){
	matriz();
}
