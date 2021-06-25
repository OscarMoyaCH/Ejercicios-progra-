// Archivos de cabecera 
#include<stdio.h>
// Prototipos de funciones 

void calculaSuperficie (float*, float*);
void calculaLongitud (float*, float*); 
void datosdeEntrada (float*);
void mostrarResul (float*, float*);

//Definicion de constante 
#define Pi 3.1416
 
 void main()
 {
 	float radio, s, l; 
    datosdeEntrada(&radio);
    calculaSuperficie(&radio, &s);
	 calculaLongitud(&radio, &l);
	 mostrarResul(&s,&l);
	 }
	 
	 
	 //cuerpo de funciones
	 
	 void calculaSuperficie(float* radio, float* s){
	 *s= Pi * (*radio) * (*radio);
	 }
	
	
	 void calculaLongitud( float* radio, float* l){
	 *l = 2 * Pi * (*radio);
	 }
	 
	 
	 void datosdeEntrada(float* radio){
	 printf("introduzca el radio \n");
	 scanf("%f", radio);
	 }
	 
	 void mostrarResul ( float* s , float* l){
	 printf("La superficie es: %f\n" , *s);
	 printf("La longitud es: %f\n" , *l);	
	 }
	 
