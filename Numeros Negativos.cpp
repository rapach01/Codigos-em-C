#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>

/*
23) Construa um programa que tenha uma fun��o que verifica se um n�mero inteiro,
passado como par�metro, e exiba na tela se o n�mero � negativo ou positivo.*/

numero(){
	int i;
	
	printf("Informe um numero: ");
	scanf("%i", &i);
	if(i>0){
		printf("\nNumero Positivo");
	}else{
		printf("\nNumero Negativo");
	}
}
main (){
	numero();
}
