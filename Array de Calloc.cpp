#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>

maloka(){
	int**v;
	int n, n2, i, c;
	
	printf("Informe o tamanho da matriz: ");
	scanf("%i %i", &n, &n2);

	v=(int **)calloc(n,sizeof(int));
	v=(int **)calloc(n2,sizeof(int));
	
	for(i=0;i<n;i++){
		for(c=0;c<n2;c++){
		printf("Informe o numero");
		scanf("%i", &v[i][c]);
		}
	}
	for(i=0;i<n;i++){
		printf("\n");
		for(c=0;c<n2;c++){
			printf("[%i]", v[i][c]);
		}
	}
}

main(){
	maloka();
}
