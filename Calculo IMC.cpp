#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main () 
{
	float h=0, p=0, resultado;
	char* nome;
	
	printf ("Bem vindo, vamos calcular seu IMC!\n");
	printf ("Primeiro, informe seu nome:\n");
	scanf("%s",&nome);
	printf ("Informe sua altura:\n");
	scanf ("%f",&h);
	printf ("Informe seu peso:\n");
	scanf ("%f",&p);
	resultado=pow (p, 2)/h;
	printf ("%.2f \n",resultado);

	if (resultado <= 18.4)
	{
		printf ("Voce esta abaixo do peso");
	}

	if (resultado >=18.5 && resultado <=24.9)
	{
		printf ("Voce esta com peso normal");	
	}
	
	if (resultado >=25.0 && resultado <=29.9)
	{
		printf("Voce esta com sobrepeso");	
	}

	if (resultado >=30.0 && resultado <=34.9)
	{
		printf("Voce esta com Obesidade Grau 1");
	}
	
	if (resultado >=35.0 && resultado <=39.9)
	{
		printf("Voce esta com Obesidade Grau 2");
	}
	
	if (resultado >=40.0)
	{
		printf("Voce esta com Obesidade Grau 3");
	}
	
}
