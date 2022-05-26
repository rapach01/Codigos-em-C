#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>

/*
23) Construa um programa que tenha uma função que verifica se um número inteiro,
passado como parâmetro, e exiba na tela se o número é negativo ou positivo.*/

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
