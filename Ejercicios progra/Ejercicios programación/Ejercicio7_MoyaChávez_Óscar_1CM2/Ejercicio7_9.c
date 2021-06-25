//Archivos de cabecera
#include<stdio.h>
#include<math.h>

//Prototipos de funciones
float volumencilindro(float r, float h);
float areatotal(float g, float rm, float r);
float volumencono(float r, float h);
float volumenesfera(float r);
float entradaDatos1(void);
float entradaDatos2(void);
float entradaDatos3(void);
float entradaDatos4(void);
void final1 (float areadeuntronco);
void final2 (float volumendecilindrot);
void final3 (float volumendeconot);
void final4 (float volumendeesferat);

//Definición de variable
#define Pi 3.1416

void main(){
   float r, rm, h, g, areadeuntronco, volumendecilindrot, volumendeconot, volumendeesferat, pi;
r = entradaDatos1();
rm = entradaDatos2();
h = entradaDatos3();
g = entradaDatos4();	
 volumendecilindrot = volumencilindro ( r, h);
 areadeuntronco = areatotal ( g, rm, r);
 volumendeconot = volumencono (r, h);
 volumendeesferat = volumenesfera(r);
 final1 (areadeuntronco);
 final2 (volumendecilindrot);
 final3 (volumendeconot);
 final4 (volumendeesferat);

}


//Cuerpo de funciones

float entradaDatos1(void){
	float r;
	printf("Ingrese el valor del radio \n");
	scanf("%f", &r );
	return r;
}

float entradaDatos2(void){
	float rm;
	printf("Ingrese el valor del radio mayor \n");
	scanf("%f", &rm );
	return rm;
}

float entradaDatos3(void){
	float h;
	printf("Ingrese el valor de la altura \n");
	scanf("%f", &h );
	return h;
}

float entradaDatos4(void){
	float g;
	printf("Ingrese el valor de la generatriz \n");
	scanf("%f", &g);
	return g;
}

float volumencilindro (float r, float h){
float volumencilindro;
volumencilindro = (pow(r,4)*h*Pi);
return volumencilindro;
}

float areatotal (float g, float rm, float r){
	float areatotal, arealateral;
	arealateral = ((Pi*g)*(rm+r)); 
	areatotal = (pow(Pi*rm,2) + pow(Pi*r,2) + arealateral);
	return areatotal;
}

float volumencono(float r, float h){
float volumencono;
volumencono = (pow(r,2)*Pi*h*0.33);
return volumencono;
}

float volumenesfera(float r){
	float volumenesfera;
	volumenesfera = (pow(r,3)*Pi*1.33);
	return volumenesfera;
}

void final1 (float areadeuntronco){
	printf("El area del tronco es %f \n", areadeuntronco);
}

void final2 (float volumendecilindrot){
	printf("El volumen del cilindro es %f \n" , volumendecilindrot);
}

void final3 (float volumendeconot){
	printf("El volumen del cono es %f \n", volumendeconot);
}

void final4 (float volumendeesferat){
	printf("El volumen de la esfera es %f \n", volumendeesferat);
}

























