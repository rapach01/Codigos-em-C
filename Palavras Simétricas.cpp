#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>
/*22) Fa�a um programa que verifique se uma palavra � sim�trica.
Por exemplo: �arara� � uma palavra sim�trica.
Podemos l�-la normalmente ou de tr�s para a frente e sempre obteremos a mesma palavra.*/
main()
{
	char palavra[15], palavra2[15];
	int i, t, c;
	
	printf("Escreva uma palavra: ");
	gets(palavra);
	t=strlen(palavra);
		
	for(c=t-1;c>=0;c--)
	{	
		palavra2[i]=palavra[c];
		i++;
	}
	
	if (strcmp(palavra2, palavra)==0)
		{
			printf("palavra simetrica");
	}else{
			printf("palavra nao simetrica");
		}
	
}
