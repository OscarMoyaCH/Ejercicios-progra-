#include <stdio.h>
#include <math.h>

//Prototipos de funciones 

float media3 (float num1, float num2, float num3);
float entradadatos (void);
void final (float mediares);

//Función principal
    void main (){
 	float  num1, num2, num3, mediares;
	num1 = entradadatos();
 	num2 = entradadatos();
 	num3 = entradadatos();
 	mediares =  media3 (num1, num2, num3);
 	final (mediares);
 }
 
 //Cuerpo de funciones
 
 float entradadatos (void){
 	float num;
	 printf("Introduzca un numero \n");
 	scanf("%f", &num );
 	return num;
 }
 
float media3 (float num1, float num2, float num3){
float media3;
 media3= (num1 + num2 + num3)/3;
 return media3;
 }
 
void final ( float mediares){
printf("La media es %f", mediares);
}
 
 
