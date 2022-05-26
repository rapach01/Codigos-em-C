#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>

/*Faça um programa que lê duas palavras do teclado
e diz se elas são iguais ou diferentes.
O programa deve dizer ainda se alguma das palavras 
digitadas é igual a “papagaio”.*/

papagagaiada(){
	char a[15], b[15];
	
	printf("Informe duas palavras: \n");
	scanf("%s %s", &a, &b);
	
		if(strcmp(a, b)==0){
			printf("Palavras iguais\n");
		}else{
			printf("Palavras diferentes\n");
		}
		if(strcmp(a, "papagaio")==0){
			printf("A primeira palavra e igual a papagaio :)\n");
		}else{
			printf("A primeira palavra e diferente de papagaio :(\n");
		}
		if(strcmp(b, "papagaio")==0){
			printf("A segunda palavra e igual a papagaio :)\n");
		}else{
			printf("A segunda palavra e diferente de papagaio :(\n");
		}
	
}

main(){
	papagagaiada();
}
