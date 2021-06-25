// Archivos de cabecera
#include <stdio.h>
// Prototipos de funciones 
float calprom(float num1, float num2, float num3, float num4, float num5);
float final(float prom);
float entradadedatos1();
float entradadedatos2();
float entradadedatos3();
float entradadedatos4();
float entradadedatos5();

void main (){
 float num1, num2, num3, num4, num5, prom;
 num1 = entradadedatos1();
 num2 = entradadedatos2();
 num3 = entradadedatos3();
 num4 = entradadedatos4();
 num5 = entradadedatos5();
prom  =  calprom( num1, num2, num3, num4, num5);
final (prom);

}

float entradadedatos1(){
	float num1;
	printf("Escriba primera calificacion\n");
	scanf("%f", &num1);
	return num1;
}

float entradadedatos2(){
	float num2;
	printf("Escriba segunda calificacion\n");
	scanf("%f", &num2);
	return num2;
}

float entradadedatos3(){
	float num3;
	printf("Escriba tercera calificacion\n");
	scanf("%f", &num3);
	return num3;
}

float entradadedatos4(){
	float num4;
	printf("Escriba cuarta calificacion\n");
	scanf("%f", &num4);
	return num4;
}

float entradadedatos5(void){
	float num5;
	printf("Escriba quinta calificacion\n");
	scanf("%f", &num5);
	return num5;
}

float calprom(float num1, float num2, float num3, float num4, float num5){
      float prom;
	  prom =(num1+ num2+ num3+ num4+ num5)/5;
     return prom;
}

float final( float prom){
	printf("El promedio es: %f\n", prom );

}




