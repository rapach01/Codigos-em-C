#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>
#include <time.h>

//variaveis

typedef struct {
	int ano, ncarros;
	double valor, cc;
	char dono[30], ipva[10], placa[10];
}cadastro;

//ala admin
admin(){
	cadastro c[10];
//variaveis
	int i, ncarros;
	
	printf("Aqui voce pode fazer o cadastro dos carros!");
	printf("Informe quantos carros voce deseja cadastrar: ");
	scanf("%i", &ncarros);
	
//laço para repetiçao do cadastro
	for(i=0;i<ncarros;i++){
		system("cls");
		fflush(stdin);
		printf("Informe o nome do Dono do veiculo: ");
		fgets(c[i].dono,30,stdin);
		fflush(stdin);
		printf("Informe a placa do veiculo: ");
		fgets(c[i].placa,10,stdin);
		printf("Informe o ano do veiculo: ");
		scanf("%i", &c[i].ano);
		fflush(stdin);
		printf("Informe se o IPVA do veiculo esta em dia: ");
		fgets(c[i].ipva,10,stdin);
	}
//printar o cadastro
	for(i=0;i<ncarros;i++){
		printf("Nome do dono: %sPlaca: %sIPVA em dia: %s", &c[i].dono, &c[i].placa, &c[i].ipva);
		printf("Ano do Veiculo: %i\n", c[i].ano);
		printf("-------------------------\n");
	}
}

//ala de vendedor
vendedor(){
	cadastro c[10];
//variaveis vendedor
	int i, ncarros2;
	double revend=0;
	
	printf("Aqui voce pode fazer o cadastro das vendas dos carros!\n");
	printf("Informe quantas vendas de carros voce deseja cadastrar: ");
	scanf("%i", &ncarros2);

//laço de repeticao dos cadastros
	for(i=0;i<ncarros2;i++){
		system("cls");
		fflush(stdin);
		printf("Informe a placa do veiculo: ");
		fgets(c[i].placa,30,stdin);
		fflush(stdin);
		printf("Informe o ano do veiculo: ");
		scanf("%i", &c[i].ano);
		printf("Informe o valor que o veiculo foi vendido: ");
		scanf("%d", &c[i].valor);
		printf("Informe a comissao do revendedor que realizou a venda: ");
		scanf("%d", &revend);
	}
//condicoes para comissao
	for(i=0;i<ncarros2;i++){
		if(revend==10){
			c[i].cc=c[i].valor*0.10;
		}
		else if(revend==20){
			c[i].cc=c[i].valor*0.20;
		}
	}
//printar o vetor com for
	for(i=0;i<ncarros2;i++){
		printf("Placa: %s",&c[i].placa);
		printf("Ano do Veiculo: %i\nValor Vendido: %.2d\nComissao do Revendedor: %.2d\n", c[i].ano, c[i].valor, c[i].cc);
		printf("-------------------------\n");
	}
}
//funcao principal
main(){
	int opcao;
	char* opcao2;
	
	printf("Bem vindo ao sistema.\n(1)Administrador\n(2)Vendedor\n");
	scanf("%i", &opcao);
	
	switch(opcao){
		case 1:{
			admin();
				printf("Voce deseja cadastrar alguma venda?");
				scanf("%s", &opcao2);
		
				if(opcao2 =="s" or opcao2=="sim"){
					vendedor();
				}else{
					printf("Programa Encerrado");
				}
			break;
		}
		case 2:{
			vendedor();
			break;
		}
	}	
}
