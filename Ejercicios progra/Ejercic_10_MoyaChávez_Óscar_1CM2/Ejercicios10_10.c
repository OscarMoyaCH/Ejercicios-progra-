#include<stdio.h>
#include<math.h>

//Prototipos de funciones 
void entradaDatos(float*, float*);
void integral( float*, float*, float*, float*, float*);
void final(float*);
//Definición de constante 
#define Pi 3.1416

void main(){
	float a, b, valora, valorb, valorab;
	entradaDatos(&a, &b);
	integral(&a, &b, &valora, &valorb, &valorab);
	final(&valorab);
}
void entradaDatos(float* a, float* b){
	printf("Introduzca el valor de a \n");
	scanf("%f", a);
	printf("Introduzca el valor de b \n");
	scanf("%f", b);
}

void integral (float* a, float* b, float* valora, float* valorb, float* valorab){
*valorb= (1/(*b+1))-3*(cos((2*(Pi)*(*b))*Pi/18);0)
*valora= (1/(*a+1))-3*(cos((2*(Pi)*(*a))*Pi/180));
*valorab= ((*valorb)-(*valora));
}

void final(float* valorab){
	printf("El valor de la integral es %f \n", *valorab);	
}
  


