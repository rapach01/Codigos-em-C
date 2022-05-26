#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>
#include <locale.h>

float imc(float altura, float peso){
	
	float calc;
	calc=pow (peso, 2)/altura;

	if (calc <= 18.4){
		printf ("Voce esta abaixo do peso");
	}
	if (calc >=18.5 && calc <=24.9){
		printf ("Voce esta com peso normal");	
	}
	if (calc >=25.0 && calc <=29.9){
		printf("Voce esta com sobrepeso");	
	}
	if (calc >=30.0 && calc <=34.9){
		printf("Voce esta com Obesidade Grau 1");
	}
	if (calc >=35.0 && calc <=39.9){
		printf("Voce esta com Obesidade Grau 2");
	}
	if (calc >=40.0){
		printf("Voce esta com Obesidade Grau 3");
	}
}
main(){
	float a, b, i;
	
	printf("Informe sua altura e seu peso: ");
	scanf("%f %f", &a,&b);
	i=imc(a,b);
}
