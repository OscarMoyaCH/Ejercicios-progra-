#include <stdio.h>
#include <math.h>

//Prototipos de funciones 
void entradaDatos(float*, float*, float*);
void areatotal(float*, float*, float*, float*, float*);
void final (float*);

void main(){
	float a, b, c, p, area;
	entradaDatos(&a, &b, &c);
	areatotal(&a, &b, &c, &p, &area);
	final(&area);
	
	
}

void entradaDatos(float* a, float* b, float* c){
	printf("Introduzca el lado a \n");
	scanf("%f",a);
	printf("Introduzca el lado b \n");
	scanf("%f",b);
	printf("Introduzca el lado c \n");
	scanf("%f",c);
}

void areatotal(float* a, float* b, float* c, float* p, float* area){
	*p=((*a+*b+*c)/2);
	*area=(sqrt(*p*(*p-*a)*(*p-*b)*(*p-*c)));
}

void final(float* area){
	printf("El area del triangulo es %f \n", *area);
}

