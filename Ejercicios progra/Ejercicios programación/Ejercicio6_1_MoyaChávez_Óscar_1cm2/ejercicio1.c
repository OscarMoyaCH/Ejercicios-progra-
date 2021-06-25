
// Archivos de cabecera 
#include<stdio.h>
// Prototipos de funciones 

float calculaSuperficie (float radio);
float calculaLongitud (float); 
float datosdeEntrada (void);
void mostrarResul (float, float);

//Definicion de constante 
#define Pi 3.1416
 
 void main()
 {
 	float radio, s, l; 
 	radio = datosdeEntrada();
 	s = calculaSuperficie(radio);
	 l = calculaLongitud(radio);
	 mostrarResul(s,l);
	 }
	 
	 
	 //cuerpo de funciones
	 
	 float calculaSuperficie(float radio){
	 float s;
	 s= Pi * (radio * radio);
	 return s;
	 }
	
	
	 float calculaLongitud( float radio){
	 float l;
	 l= 2 * Pi * radio;
	 return l;
	 }
	 
	 
	 float datosdeEntrada(){
	 float radio;
	 printf("introduzca el radio \n");
	 scanf("%f" , &radio);
	 return radio;
	 }
	 
	 void mostrarResul ( float s , float l){
	 printf("La superficie es: %f\n" , s);
	 printf("La longitud es: %f\n" , l);	
	 }
	 
	 
	
	 

