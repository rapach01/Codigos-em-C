#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>


main(){
	char nome[80], senha[80], confirm[80];
	int i=0, size=0;
		
		printf("Informe seu nome: ");
		gets(nome);
	do 
	{
		printf("\nInforme sua senha: ");
		gets(senha);
		size = strlen(senha);
		
		if (size < 5 || size > 10){
			printf("Sua senha deve ter no minimo 5 Caracteres e no Maximo 10");
		i=1;
		}else{
			printf("\nConfirmacao: ");
			gets(confirm);
		if(strcmp(senha, confirm)==0){
			printf("Senha correta");
			i=0;
		}else{
			printf("\nSenha Incorreta");
			i=1;
		}
		}
	}while(i!=0);
}
