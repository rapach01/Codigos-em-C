#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>
#include <locale.h>

int media (int n1, int n2){
	int m;
	m=n1+n2;
	m/=2;
	
	if (m >=7){
		printf("Voce esta aprovado com media de %i", m);
	}else{
		printf("Voce esta reprovado com media de %i", m);
	}
}
main()
{
	int i, a, b;
	
	printf("Informe a nota dos alunos: ");
	scanf("%i %i", &a, &b);
	
	i=media(a,b);
	
}
