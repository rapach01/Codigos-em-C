#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>
/*Faça um programa que leia:
o valor do salário atual do funcionário;
 o tempo de serviço deste funcionário na empresa (quantidade de anos de trabalho na empresa).
 Use a tabela 3.9 para calcular o salário reajustado deste funcionário 
 e imprima o valor do salário final reajustado, ou uma mensagem caso o funcionário não tenho direito a aumento.
*/


salariosr(){
	int salario, reajuste, final, bonus, tempo;
	char nome[30];
	
	printf("Informe seu nome: ");
	gets(nome);
	printf("Informe o seu salario atual: ");
	scanf("%i", &salario);
	
	if(salario<=500){
		reajuste=salario*0.25;
		final=reajuste+salario;
		printf("O seu reajuste foi de: %i\n", reajuste);
		printf("O seu salario a partir de agora e de: %i", final);
	}
	else if(salario>500 && salario<=1000){
		reajuste=salario*0.20;
		final=reajuste+salario;
		printf("O seu reajuste foi de: %i\n", reajuste);
		printf("O seu salario a partir de agora e de: %i", final);
	}
	else if(salario>1000 && salario<=1500){
		reajuste=salario*0.15;
		final=reajuste+salario;
		printf("O seu reajuste foi de: %i\n", reajuste);
		printf("O seu salario a partir de agora e de: %i", final);
	}
	else if(salario>1500 && salario<=2000){
		reajuste=salario*0.10;
		final=reajuste+salario;
		printf("O seu reajuste foi de: %i\n", reajuste);
		printf("O seu salario a partir de agora e de: %i", final);
	}
	else if(salario>2000){
		printf("Voce nao tem direito a reajuste!");
	}
	printf("\n");
	
	printf("Informe ha quanto anos voce esta na empresa (se nao completou 1 ano, escreva 0): ");
	scanf("%i", &tempo);
	
	if(tempo<1){
		printf("Voce nao tem direito a bonus ainda!");
	}
	else if(tempo>1 && tempo<3){
		bonus=100;
		printf("Voce tem direito a 100 reais de bonus!");
	}
	else if(tempo>4 && tempo<6){
		bonus=200;
		printf("Voce tem direito a 200 reais de bonus!");
	}
	else if(tempo>7 && tempo<10){
		bonus=300;
		printf("Voce tem direito a 300 reais de bonus!");
	}
	else if(tempo>10){
		bonus=500;
		printf("Voce tem direito a 500 reais de bonus!");
	}
	system("cls");
	
	printf("Seu salario agora e %i + Bonus de %i!", final, bonus);
}
main(){
	salariosr();
}
