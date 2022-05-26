#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main ()
{
	int min=0, max=0, medio=0;
	
	printf("Informe a quantidade maxima de pecas e a minima\n");
	scanf("%d %d", max, min);
	medio= (min+max)/2;
	printf ("O estoque medio: %d", medio);
}
