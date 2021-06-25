#include<stdio.h>
#include<math.h>

//Prototipos de funciones
void entradaDatos1(float*);
void entradaDatos2(float*);
void componenteVertical(float*, float*, float*);
void componenteHorizontal(float*, float*, float*);
void final(float*, float*);
//Definición constamte 
#define Pi  3.1416


void main(){
	float magnitud, angulo, vertical, horizontal;
	
	entradaDatos1(&magnitud);
	entradaDatos2(&angulo);
	componenteVertical(&magnitud,  &angulo, &vertical);
	componenteHorizontal(&magnitud, &angulo,&horizontal);
	final(&vertical, &horizontal);

}

void entradaDatos1(float* magnitud){
	printf("Introduzca la magnitud del vector \n");
	scanf("%f", magnitud);
}

void entradaDatos2(float* angulo){
	printf("Intruduzca el valor del angulo em grados \n");
	scanf("%f", angulo);
}

void componenteVertical(float* magnitud, float* angulo, float* vertical){
	*vertical= ((*magnitud)* sin((*angulo*Pi)/180));
}

void componenteHorizontal(float* magnitud, float* angulo, float* horizontal){
	*horizontal=((*magnitud)* cos((*angulo*Pi)/180));
}

void final (float* horizontal, float* vertical){
	printf("La componente vertical es %f\n", *vertical);
	printf("La componente horizontal es %f\n", *horizontal);
}
