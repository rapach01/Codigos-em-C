/*Escreva um programa que peça ao usuário que digite três números inteiros,
 correspondentes a dia , mês e ano.
  Teste os números recebidos, e em caso de haver algum inválido, 
  repita a leitura até conseguir valores que estejam na faixa correta (dias entre 1 e 31, mês entre 1 e 12 e ano entre 1900 e 2100).
  Verifique se o mês e o número de dias batem. 
Se estiver tudo certo imprima o número que aquele dia corresponde no ano. Comente seu programa.*/

//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main ()
{
	int dia=0, ano=0, mes=0, i=0; //variaveis
	
	do{ //inicio laço
	
	printf("\nInforme uma data com dia, mes e ano: \n"); //dados do user
	scanf("%i %i %i", &dia, &mes, &ano);
	
	
		if ((dia < 1 || dia > 31) || (mes<1 || mes>12) || (ano<1900 || ano>2100) || (dia>28 && mes==2))
		{
			printf("Esta data e invalida\n"); //verificaçao
			i=1;
		}
		else if ((dia ==31 && mes==4) || (dia==31 && mes==6) ||  (dia==31 && mes==9) ||  (dia==31 && mes==9))
		{
			printf("Este mes vai somente ate o dia 30"); //meses ate o dia 30
			i=1;
		}
		else
		{
		if (mes == 1) //data final
		{
			printf("%i de Janeiro de %i", dia, ano);
			i=0;
		}
		if (mes == 2)
		{
			printf("%i de Fevereiro de %i", dia, ano);
			i=0;
		}
		if (mes == 3)
		{
			printf("%i de Março de %i", dia, ano);
			i=0;
		}
		if (mes == 4)
		{
			printf("%i de Abril de %i", dia, ano);
			i=0;
		}
		if (mes == 5)
		{
			printf("%i de Maio de %i", dia, ano);
			i=0;
		}
		if (mes == 6)
		{
			printf("%i de Junho de %i", dia, ano);
			i=0;
		}
		if (mes == 7)
		{
			printf("%i de Julho de %i", dia, ano);
			i=0;
		}
		if (mes == 8)
		{
			printf("%i de Agosto de %i", dia, ano);
			i=0;
		}
		if (mes == 9)
		{
			printf("%i de Setembro de %i", dia, ano);
			i=0;
		}
		if (mes == 10)
		{
			printf("%i de Outubro de %i", dia, ano);
			i=0;
		}
		if (mes == 11)
		{
			printf("%i de Novembro de %i", dia, ano);
			i=0;
		}
		if (mes == 12)
		{
			printf("%i de Dezembro de %i", dia, ano);
			i=0;
		}
		}
	}while (i!= 0); //fim do laço
}
