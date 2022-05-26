#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main () {
	
	double resultado=0, valor=0;
	
	printf("Escreva um valor");
	scanf("%d", &valor);
	
	while (valor!=0){
		resultado += valor;
		printf("Escreva um valor");
		scanf("%d", &valor);
	}
	
	printf("%d", resultado);
}
