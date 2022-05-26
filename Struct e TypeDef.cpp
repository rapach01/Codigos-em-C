#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct al 
{
	char* nome;
	char* cidade;
	int tel;	
};

main ()
{
	struct al a, i;
	
	a.nome = "Arthur";
	a.tel = 99999999;
	a.cidade = "Tramandai";	
	i=a;
	
	printf("Nome: %s \nTelefone: %d \nCidade: %s\n\n", i.nome, i.tel, i.cidade);
	
	a.nome = "Pedro";
	a.tel = 83834858;
	a.cidade = "Porto Alegre";	
	i=a;
	
	printf("Nome: %s \ntelefone: %d \ncidade: %s\n\n", i.nome, i.tel, i.cidade);
	
	a.nome = "Jonatan";
	a.tel = 458468436;
	a.cidade = "Santa Maria";	
	i=a;
	
	printf("Nome: %s \ntelefone: %d \ncidade: %s\n 
	", i.nome, i.tel, i.cidade);
}


