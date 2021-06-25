#include<stdio.h>

//Prototipos de funciones 
void entradaDatos1(float*);
void entradaDatos2(float*);
void velocidadFinal(float*, float*, float*);
void final(float*);

//Definición constante 
#define g 9.81

void main(){
	float vo, t, vf;
	entradaDatos1(&vo);
	entradaDatos2(&t);
	velocidadFinal(&vo, &t, &vf);
	final(&vf);
}



void entradaDatos1(float* vo){
	printf("Introduzca la velocidad inicial \n");
	scanf("%f", vo);
}

void entradaDatos2(float* t){
	printf("Introduzca el tiempo \n");
	scanf("%f", t);
}

void velocidadFinal(float* vo, float* t, float* vf){
	*vf=(*vo+g)*(*t);
}

void final (float* vf){
	printf("La velocidad final es %f \n", *vf);
}
