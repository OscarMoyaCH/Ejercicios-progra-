//Archivos de cabecera 
#include<stdio.h>
#include<math.h>

//Prototipos de funciones 

void datosEntrada1(float*);
void datosEntrada2(float*);
void calculoHipotenusa(float*, float*, float*);
void final(float*);
 
 //Prototipos de funciones 
 void main() {
 	
float a, b, calHip;
 datosEntrada1(&a);
 datosEntrada2(&b);
 calculoHipotenusa(&a, &b, &calHip);
 final(&calHip);

 }
 
 
void datosEntrada1(float* a){
	printf( "Introduzca el valor de a \n");
	scanf("%f", a);
}

void datosEntrada2(float* b){
	printf("Introduzca el valor de b \n");
	scanf("%f", b);
}

void calculoHipotenusa(float* a, float* b, float* calHip){
	*calHip = (sqrt(pow(*a,2)+pow(*b,2)));
}


void final (float* calHip){
	printf("La hipotenusa es %f\n", *calHip);
}


