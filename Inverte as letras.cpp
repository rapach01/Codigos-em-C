#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>

/*Fa�a um programa que l� tr�s palavras do teclado
e imprime as tr�s palavras na ordem inversa.*/

rev(){
	char palavra1[15], palavra2[15], palavra3[15];
	int i;
	
	printf("informe a primeira palavra: ");
	gets(palavra1);
	printf("informe a segunda palavra: ");
	gets(palavra2);
	printf("informe a terceira palavra: ");
	gets(palavra3);

	
	for(i=strlen(palavra1)-1;i>=0;i--){
		printf("%c", palavra3[i]);
	}
	printf("\n");
	for(i=strlen(palavra1)-1;i>=0;i--){
		printf("%c", palavra2[i]);
	}
	printf("\n");
	for(i=strlen(palavra1)-1;i>=0;i--){
		printf("%c", palavra1[i]);
	}
}
main(){
	rev();
}
