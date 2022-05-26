#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>
/*4) Uma cidade tem 4 ruas leste­oeste e 6 ruas norte­sul.
Ou seja, tem 4x6 = 24 cruzamentos.
Leia uma  seqüência de pares de ruas que indicam o cruzamento
onde cada acidente ocorreu.
Imprima uma matriz com a  contagem de acidentes de cada cruzamento*/
 
acidentes (){
	int ruas[5][7], i, c;
	
	for(i=1; i<5; i++){
		for(c=1; c<7; c++){
			printf("Aconteceu algum acidente no cruzameto na rua [%d] com [%d]? (insira 1 para sim e 0 para nao):", i, c);
			scanf("%i", &ruas[i][c]);
		}
	}
	system("cls");
	
	for(i=1; i<5; i++){
		printf("\n");
		for(c=1; c<7; c++){
			printf("[%i]\t", ruas[i][c]);
			if(ruas[i][c] == 1){
				printf("Acidente");
			}else{
				printf("Tranquilo");
			}
		}
	}
}
main(){
	acidentes();
}
