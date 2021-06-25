//Archivos de cabecera 
#include<stdio.h>
#include<math.h>

//Prototipos de funciones 

float fuerzagrav(float m1,float m2, float d);
 float entradaDatos1(void);
 float entradaDatos2(void);
 float entradaDatos3(void);
 void final ( float fuerzagravtotal);

#define G 6.672*pow(10,-11)

void main(){
	float m1, m2, d, fuerzagravtotal;
	m1=entradaDatos1();
	m2=entradaDatos2();
	d=entradaDatos3();
	fuerzagravtotal=fuerzagrav( m1, m2, d);
	final (fuerzagravtotal);
}

//Cuerpo de funciones 

float entradaDatos1(void){
	float m1;
	printf("Introduzca la primera masa \n");
	scanf("%f",&m1);
	return m1;
}

float entradaDatos2(void){
	float m2;
	printf("Introduzca la segunda  masa  \n");
	scanf("%f", &m2);
	return m2;
}

float entradaDatos3(void){
float d;
printf("Introduzca la distancia \n");
scanf("%f", &d);
return d;
}

float fuerzagrav(float m1,float m2,float d){
	float fuerzagrav;
	fuerzagrav = ((G*m1*m2)/pow(d,2));
	return fuerzagrav;
}

void final (float fuerzagravtotal){
    printf("La fuerza gravitacional es %e", fuerzagravtotal);
}













