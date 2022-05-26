#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>
#include <time.h>

calicamat(){
	
	int**mat=0, n=0, n2=0, i=0, c=0;
	
	printf("Informe o tamanho da matriz: ");
	scanf("%i %i", &n, &n2);

	mat=(int **)malloc(n*sizeof(int*));
	
	for(i=0;i<n;i++){
		mat[i]=(int*)malloc(n2*sizeof(int*));
	}
	srand(time(NULL));
	for(i=0;i<n;i++){
		for(c=0;c<n2;c++){
			mat[i][c]= rand() %100;
		}
	}
	for(i=0;i<n;i++){
		printf("\n");
		for(c=0;c<n2;c++){
			printf("[%i]", mat[i][c]);
		}
	}
	printf("\nInforme o tamanho da realocacao da matriz: ");
	scanf("%i %i", &n, &n2);
	
	mat = (int **) realloc (mat, sizeof (int) * (n));
	
	for(i=0;i<n;i++){
		 mat[i] = (int *) realloc (mat[i], sizeof (int) * (n2)); 
	}
	
	srand(time(NULL));
	
	for(i=0;i<n;i++){
		for(c=0;c<n2;c++){
			mat[i][c]= rand() %100;
		}
	}
	for(i=0;i<n;i++){
		printf("\n");
		for(c=0;c<n2;c++){
			printf("[%i]", mat[i][c]);
		}
	}
	free(mat);
	
}
main(){
	calicamat();
}
