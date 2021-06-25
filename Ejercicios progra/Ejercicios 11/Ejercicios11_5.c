//Supermercado
//Archivos de cabecera 
#include<stdio.h>

//Prototipo de funciones
void compra(float *, char *);
void descuento(float *, float *, char *);
void mostrarResul(float *);

//Función principal
void main(){
	float com,des;
	char bol;
	compra(&com, &bol);
	descuento(&des, &com, &bol);
	mostrarResul(&des);
}

//Cuerpo de las funciones
void compra(float *com, char *bol){
	printf("Ingrese el monto de la compra: \n");
	scanf("%f",*&com);
	printf("\nIngrese unicamente la primera letra en mayuscula de la bola que le toco: \n");
	scanf(" %c",*&bol);
	
}

void descuento(float *des, float *com, char *bol){
	switch(*bol){
		case'A': *des = *com - (*com *.2);
				break;
		case'R': *des = *com - (*com *.3);
				break;
		case'B': *des = *com;
				break;	
	}
	
}

void mostrarResul(float *des){
	printf("\nEl total a pagar es: %.2f",*des);
}
	
	

