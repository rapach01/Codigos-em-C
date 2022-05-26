#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>

/*Elabore um programa que tenha uma função que 
retorne o reverso de um número inteiro. Por exemplo, 932-> 239.*/

reverso()
{
	int num, inv, r;
	
	printf("Informe um numero inteiro: ");
	scanf("%i", &num);
	
	while(num>0)
	{
		r = num%10;
		inv = inv*10+r;
		num /=10;
	}
	printf("A ordem inversa e: %i", inv);
}
main()
{
	reverso();
}
