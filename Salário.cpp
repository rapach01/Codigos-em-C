#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main ()
{
	float salario =0, ir=0, saliq=0;
	
	salario=100;
	saliq=100;
	
	if (saliq >= 100)
	{
		printf("verdadeiro");
	}
	else 
	{
		printf("falso");
	}
	
	salario=200;
	ir= 10;
	saliq=190;
	
	if (saliq <190)
	{
		printf("\nverdadeiro");
	}
	else 
	{
		printf("\nfalso");
	}

	salario=300;
	ir=15;
	saliq=285;

	if (saliq = salario-ir)
	{
		printf("\nverdadeiro");
	}
	else 
	{
		printf("\nfalso");
	}
}
