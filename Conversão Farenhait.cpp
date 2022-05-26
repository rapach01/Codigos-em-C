#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main () 
{
	int i=0;
	float c=0, f=0;

	printf ("Voce deseja ver a tabela de conversao positiva ou negativa?\n(1)Positiva\n(2)Negativo\n(3)Sair\n");
	scanf ("%d", &i);
	
	switch(i)
	{
		case 1 :
		{
			c=10;
			system("cls");
			printf ("Conversao Positiva\n");
			for (c=10;c<=100;c+=10)
			{
				f= (9/5)*(c)+32;
				printf("%.2f\n", f);
			}
			break;
		}
		case 2 :
		{
			c=-10;
			system("cls");
			printf ("Conversao Negativa\n");
			for (c=-100;c<=-10;c+=10)
			{
				f= (9/5)*(c)+32;
				printf("%.2f\n", f);
			}
			break;
		}
		default:
		{
			break;
		}
	}
}
	

