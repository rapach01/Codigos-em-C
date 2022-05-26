#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main () 
{
	int a=0, b=0, c=0, i=0;
	
	printf("Escolha a opcao desejada:\n (1)Trocar uma lampada\n (2)Comprar um Teclado\n (3)Colocar um tenis\n");
	scanf ("%d", &i);
	
	switch (i)
	{
		case 1:
		{	
			printf("Para trocar uma lampada, voce deve tirar a que esta conectada, pegar a nova e colaca-la no lugar da antiga");
			break;
		}
		case 2:
		{
			printf("Para comprar o teclado, voce deve ter o dinheiro, ir na loja, escolher ele e efetuar o pagamento");	
			break;
		}
		case 3:
		{
			printf("Para colocar o tenis, voce deve dessamarrar ele, botar no pe e amarra-lo");
			break;
		}
			
	}
}
