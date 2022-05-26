#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <string>
#include <time.h>

calica(){
	int *v, *vv, i, n;
	
	printf("Informe o tamanho do primeiro vetor: ");
	scanf("%i", &n);
	
	v=(int *)malloc(n*sizeof(int));
	srand(time(NULL));
	
	if(v>0){
		for(i=0;i<n;i++){
			v[i]= rand() % 100;
		}
	}else{
		printf("Memoria nao alcancada");
	}
	for(i=0;i<n;i++){
		printf("[%i]", v[i]);
	}
	
	printf("\n");
	printf("Informe o tamanho da realocacao do primeiro vetor: ");
	scanf("%i", &n);

	v=(int *)realloc(v,n);
	srand(time(NULL));
	
	if(v>0){
		for(i=0;i<n;i++){
			v[i]= rand() % 100;
		}
	}else{
		printf("Memoria nao alcancada");
	}
	for(i=0;i<n;i++){
		printf("[%i]", v[i]);
	}

	printf("\n");
	printf("Informe o tamanho do segundo vetor: ");
	scanf("%i", &n);
	
	vv=(int *)calloc(n,sizeof(int));
	srand(time(NULL));
	
	if(vv>0){
		for(i=0;i<n;i++){
			vv[i]= rand() % 100;
		}
	}else{
		printf("Memoria nao alcancada");
	}
	for(i=0;i<n;i++){
		printf("[%i]", vv[i]);
	}
	
	printf("\n");
	printf("Informe o tamanho da realocacao do segundo vetor: ");
	scanf("%i", &n);
	vv=(int *)realloc(vv,n);
	srand(time(NULL));
	
	if(vv>0){
		for(i=0;i<n;i++){
			vv[i]= rand() % 100;
		}
	}else{
		printf("Memoria nao alcancada");
	}
	for(i=0;i<n;i++){
		printf("[%i]", vv[i]);
	}
}
main(){
	calica();
}
