#include <stdio.h>
#include<math.h>

//Prototipos de funciones 

float velfin( float acel,float vi, float t);
float entradaDatos1(void);
float entradaDatos2(void);
float entradaDatos3(void);
void final (float rvelfin);

void main(){
	float acel, vi, t, rvelfin;
	acel = entradaDatos1();
	vi = entradaDatos2();
	t = entradaDatos3();
	rvelfin = velfin(acel, vi, t);
	final (rvelfin);

}
float entradaDatos1(void){
	float acel;
	printf("Ingrese la aceleracion \n");
	scanf("%f", &acel);
	return acel;
}

float entradaDatos2(void){
	float vi;
	printf("Ingrese la velocidad inicial \n");
	scanf("%f", &vi);
	return vi;
}

float entradaDatos3(void){
	float t;
	printf("Ingrese el tiempo \n");
	scanf("%f", &t);
	return t;
}

float velfin( float acel, float vi, float t){
	float velfin;
	velfin= ((vi + acel)*t);
	return velfin;
}

void final (float rvelfin){
	printf("La velocidad final es %f", rvelfin);

	
}




