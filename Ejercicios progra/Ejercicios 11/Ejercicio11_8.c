#include<stdio.h>

float entradaDatos(float*, float*);
float mom(float*, float*);


void main(){
	float num1, num2;
	entradaDatos(&num1, &num2);
	mom(&num1, &num2);
}


float entradaDatos(float* num1, float* num2){
	printf("Introduzca el primer numero \n");
	scanf("%f", num1);
	printf("Introduzca el segundo numero \n");
	scanf("%f", num2);
}

float mom(float* num1, float* num2){
	if (num1>num2){
		printf("El %f es más grande que el %f \n", *num1, *num2);
	}
	else {
		printf("El %f es mas grande que el %f \n", *num2, *num1);
	}
	}

