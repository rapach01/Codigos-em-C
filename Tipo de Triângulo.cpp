#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main () 
{
	float a, b, c;
	
	printf("Informe tres numeros\n");
	scanf("%f %f %f", &a,&b,&c);
	if (a==b && b==c && c==a)
	{
		printf("Este e um Triangulo Equilatero");
	}
	if (a==b && b!=c || b==c && c!=a || c==a && a!=b)
	{
		printf("Este e um Triangulo Isosceles");
	}
	if (a!=b && b!=c && c!=a)
	{
		printf("Este e um Triangulo Escaleno");
	}
}

