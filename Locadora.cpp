#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>

locadora(){
	int qtd[15], i;
	char clientes[15];
	
	for(i=0;i<15;i++){
		printf("Qual seu nome?\n");
		scanf("%s", &clientes[i]);
		printf("Informe quantas locacoes voce fez em 2009?\n");
		scanf("%i", &qtd[i]);
		
		if(qtd[i]<10){
			printf("Cliente: %s\n", clientes);
			printf("Voce nao tem direito locacao gratis\n");
		}
		if(qtd[i]>=10 && qtd[i]<20){
			printf("Cliente: %s\n", clientes);
			printf("Voce tem 1 locacao gratis\n");
		}
		if(qtd[i]>=20 && qtd[i]<30){
			printf("Cliente: %s\n", clientes);
			printf("Voce tem 2 locacoes gratis\n");
		}
		if(qtd[i]>=30 && qtd[i]<40){
			printf("Cliente: %s\n", clientes);
			printf("Voce tem 3 locacoes gratis\n");
		}
		if(qtd[i]>=40 && qtd[i]<50){
			printf("Cliente: %s\n", clientes);
			printf("Voce tem 4 locacoes gratis\n");
		}
		if(qtd[i]>=50 && qtd[i]<60){
			printf("Cliente: %s\n", clientes);
			printf("Voce tem 5 locacoes gratis\n");
		}
	}
}
main(){
	locadora();
}
