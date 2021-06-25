#include<stdio.h>
#include<math.h>
void entradaDatos(int*);
void serie(int*, int*, float*);
void mostrar(float*);
void main(){
	int terminos, i;
	float suma;
	entradaDatos(&terminos);
	serie(&terminos, &i, &suma);
	i=0;
    mostrar(&suma);
}


void entradaDatos(int* terminos){
	printf("Introduzca el numero de terminos que se calculara en la serie \n");
	scanf("%d", terminos);
}

void serie(int* terminos, int* i, float* suma){
	
	while(*i>=*terminos){
	*i+=1;
	*suma=(pow(*i/2,*i));
}

}

void mostrar(float *suma){
	printf("La suma es %f", *suma);
}
