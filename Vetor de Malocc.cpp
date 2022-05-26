#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>

vetor(){
	int*v;
	int i, n;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%i", &n);
	
	v=(int *)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		printf("Informe os numeros do seu vetor: ");
		scanf("%i", &v[i]);
	}
	for(i=0;i<n;i++){
		printf("%i", v[i]);
	}
}

main(){
	vetor();
}
