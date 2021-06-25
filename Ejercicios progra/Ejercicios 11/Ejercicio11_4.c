#include<stdio.h>

//Prototipos de funciones 
void entradaDatos(float*, float*, float*);
void calculoporciento(float*, float*, float*, float*);
void calcularaprobado(float*);

void main(){
	float cal1, cal2, cal3, promedio, aprobado;
	entradaDatos(&cal1, &cal2, &cal3);
	calculoporciento(&cal1, &cal2, &cal3, &promedio);
	calcularaprobado(&promedio);
}


void entradaDatos(float* cal1, float* cal2, float* cal3){
	printf("Introduzca la primera calificacion \n");
	scanf("%f", cal1);
	printf("Introduzca la segunda calificacion \n");
	scanf("%f", cal2);
	printf("Introduzca la tercera calificacion \n");
	scanf("%f", cal3);
}

void calculoporciento(float* cal1, float* cal2, float* cal3, float* promedio){
*cal1=(((*cal1)*30)/100);
*cal2=(((*cal2)*30)/100);
*cal3=(((*cal3)*40)/100);
*promedio= (*cal1+*cal2+*cal3);
}

void calcularaprobado(float* promedio){
	if(*promedio>=6){
		printf("Aprobado \n");
	}
else{
	printf("reprobado \n");
}

}


