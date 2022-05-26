#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>
#include <locale.h>

char* st(char* c, char* d){
	
	if (c==d){
		printf ("Senha Correta");
	}else{
		printf ("Senha Incorreta");
	}
}
main(){
	char* a, *b, *i;
	
	printf("Informe sua senha: ");
	scanf("%s", &a);
	printf("Confirme sua senha: ");
	scanf("%s", &b);
	
	i = st (a,b);
}
