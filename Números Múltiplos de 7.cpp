#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*10)Escreva um programa que coloque os n�meros de 1 a 100 na tela na ordem inversa (come�ando em 100 e terminando em 1).
11) Calcular e listar todos os m�ltiplos positivos do n�mero 7 menores ou iguais a 100.*/
main ()
{
	int i=0, a=0;
	
	printf("Informe um numero\n");
	scanf("%d", &a);
	a%= 7;

	if (a == 0)
	{
		printf("multiplo de 7");
	}
	else
	{
		printf("Este nao e um multiplo de 7");
	}
}
