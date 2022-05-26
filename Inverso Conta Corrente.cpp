#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>
#include <locale.h>

conta (){
	int corrente, inv, resto, manter, i, multi;
	char c[80];
	
	printf("Informe o numero da conta corrente: ");
	scanf("%i", &corrente);
	manter=corrente;
	
	while(corrente>0){
	resto = corrente%10;
	inv = inv*10+resto;
	corrente/=10;
	}
	
	manter+=inv;	
	printf("%i %i\n", inv, manter);
	
	sprintf(c,"%d", inv);
	
	for(i=0;i<strlen(c);i++)
	printf("%c\n", c[i]);

	for(i=0;i>0;i++){
	multi=c[i];

	}
	printf("%i", multi);
}

main()
{
	conta();
}
