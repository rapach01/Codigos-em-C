//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <string.h>
#include <locale.h>
#include <conio.h>
//Fun��es

//Fun��o Principal
main (){
	setlocale(LC_ALL, "Portuguese");
	
	int v[10],i,maior;
	
	printf("Informe 10 n�meros\n");
	for(i=0;i<10;i++){
		scanf("%d",&v[i]);
	}
	for(i=0;i<10;i++){
		if(v[i] > maior){
			maior = v[i];
		}
	}
	printf("Maior: %i",maior);
}
