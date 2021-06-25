#include<stdio.h>

void entradaDatos(int*);
void entradaDatoshoras(int*);
void total(int*, float*, int*);

void main(){
	int min, horas;
	float costo;
   entradaDatoshoras(&horas); 
	entradaDatos(&min);
	total(&min, &costo, &horas);
}


void entradaDatoshoras(int* horas){
	printf("Introduzca el numero de horas, en caso de no ser ninguna ingrese el numero 0 \n");
	scanf("%d", horas);
	
}
void entradaDatos(int* min){
	printf("Introduzca el numero de minutos \n");
	scanf("%d", min);
}

void total(int* min, float* costo, int* horas){
	if (*horas>=1){
	*costo=(*horas*(.60));
	printf("Total a pagar %f \n", *costo);
	}
	else if (*min<=59){
		*costo= ((*min-10)*0.01)*(*min-10);
		printf("Total a pagar: %f \n", *costo);
	}
}


