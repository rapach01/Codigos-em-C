#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>

/*Conte os votos de uma eleição com 10 candidatos.
Leia  os votos de um arquivo.
Use um vetor para os  contadores.*/

candidatos()
{
	int candvoto[11], i, c;	
	
	for(c=1;c<11;c++){
		printf("Informe quantos votos o candidato [%i] recebeu: ", c);
		scanf("%i", &candvoto[c]);
	}
	system("cls");
	
	printf("Qual candidato voce deseja visualizar os dados?\n[1]\n[2]\n[3]\n[4]\n[5]\n[6]\n[7]\n[8]\n[9]\n[10]\n[0] Sair\n");
	scanf("%i", &i);
	system("cls");

	switch(i){
		case 1:{
			printf("O candidato 1 recebeu %i votos!", candvoto[1]);
			break;
		}
		case 2:{
			printf("O candidato 2 recebeu %i votos!", candvoto[2]);
			break;
		}
		case 3:{
			printf("O candidato 3 recebeu %i votos!", candvoto[3]);
			break;
		}
		case 4:{
			printf("O candidato 4 recebeu %i votos!", candvoto[4]);
			break;
		}
		case 5:{
			printf("O candidato 5 recebeu %i votos!", candvoto[5]);
			break;
		}
		case 6:{
			printf("O candidato 6 recebeu %i votos!", candvoto[6]);
			break;
		}
		case 7:{
			printf("O candidato 7 recebeu %i votos!", candvoto[7]);
			break;
		}
		case 8:{
			printf("O candidato 8 recebeu %i votos!", candvoto[8]);
			break;
		}
		case 9:{
			printf("O candidato 9 recebeu %i votos!", candvoto[9]);
			break;
		}
		case 10:{
			printf("O candidato 10 recebeu %i votos!", candvoto[10]);
			break;
		}
		default:{
			break;
		}
	}
}
main(){
	candidatos();
}
