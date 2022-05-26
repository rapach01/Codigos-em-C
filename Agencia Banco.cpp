#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

typedef struct { //funcao cadastro
	int conta, agencia, saldo;
	char nome [100], banco [100];
}cadastro;
//funcao principal
main(){
	cadastro t[6]; //variaveis
	int i; 
	
	printf("Bem-Vindo ao Aplicativo do Banco!\n");
	
	
	
	for(i=0;i<6;i++){//inicio for
	fflush(stdin);  	
	printf("Informe o nome do titular da conta:\n");
	fgets(t[i].nome,100,stdin);   //dados usuario
	printf("Informe o banco:\n");
	fgets(t[i].banco,100,stdin);
	printf("Informe o numero da conta:\n");
	scanf("%i",&t[i].conta);
	printf("Informe a agencia:\n");
	scanf("%i",&t[i].agencia);
	printf("Informe o saldo\n");
	scanf("%i",&t[i].saldo);
	system("cls");
	}//fim do for
	for(i=0;i<6;i++){//inicio do for para printar
		printf("Nome da conta: %s Banco: %s", &t[i].nome, &t[i].banco);
		printf("Numero da conta: %i\nAgencia: %i\nSaldo da conta: %i\n", t[i].conta, t[i].agencia, t[i].saldo);
		printf("-------------------------\n");	
	}//fim
}
