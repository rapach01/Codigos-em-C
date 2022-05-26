#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>

/*21) Escreva um programa que leia uma string
conte quantos caracteres desta string são iguais a 'a'
substitua os que forem iguais a 'a' por 'b'.
 O programa deve imprimir o número de caracteres modificados e a string modificada. 
*/

main()
{
	char s[80];
	int i,c=0;
	
	printf("Insira uma frase: ");
	gets(s);
	for (i=0;i<80;i++)
	{
		if (s[i]== 'a'){
			c++;
			s[i]='b';
		}
	}
	printf("O numero de 'a' sustituido e: %i\n", c);
	printf("A frase com as substituicoes fica:\n%s", &s);
}
