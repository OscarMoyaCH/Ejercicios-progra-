#include<stdio.h>

//Prototipos de funciones 

void entradaDatos(float*);
void muestra(float*, float*);

void main(){
	float monto, descuento;
	entradaDatos(&monto);
	muestra(&monto, &descuento);
}


void entradaDatos(float* monto){
printf("Ingrese el monto gastado \n");
scanf("%f", monto);
}

void muestra(float* monto, float* descuento){
	if(*monto>=1000){
		*descuento = ((20*(*monto))/100);
		*monto = (*monto-*descuento);
		printf("el precio a pagar es %f \n", *monto);
	}
	else{
		printf("no se aplica ningun descuento \n");
	}

	
}
