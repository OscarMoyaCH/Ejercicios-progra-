#include <stdio.h>
#include<stdlib.h>
#define FIL 10
#define COL 10
void menu();
void dimension(int*,int*);
void datos(int, int, int [FIL][COL]);
void suma(int, int, int [FIL][COL]);
void producto(int, int, int [FIL][COL]);
void mostrar(int, int, int [FIL][COL]);

void main(){
menu();
}

void menu(){
	int op, fil, col;
	int mtz[FIL][COL];
	do
	{
	
		printf("Seleccione la opcion deseada \n");
		printf("1) Dimension de la matriz\n");
		printf("2) Datos de la matriz\n");
		printf("3) Sumar los elementos de la diagonal secundaria\n");
		printf("4) Producto de los elementos de la diagonal inferior\n");
		printf("5) Mostrar la  matriz ingresada \n");
		printf("6) Salir\n");
		scanf("%d", &op);
		switch(op){
			case 1: dimension(&fil,&col);
			break;
			case 2: datos(fil, col, mtz);
			break;
			case 3: suma(fil, col, mtz);
			break;
			case 4: producto(fil, col, mtz);
			break;
			case 5: mostrar(fil, col, mtz);
			break;
			case 6: exit(0);
			break;
			default: printf("\nOpcion no valida");
		}
	}
	while(op !=6);
	
	printf("Sale bai \n");
}

void dimension(int* fil,int* col){
	printf("Introduzca Filas: ");
	scanf("%d", fil);
	printf("Introduzca Columnas: ");
	scanf("%d", col);
}

void datos(int fil, int col, int mtz[FIL][COL]){
		int i,j;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("Dato[%d][%d]: ",i,j);
			scanf("%d",&mtz[i][j]);
		}
	}
}

void suma(int fil, int col, int mtz[FIL][COL]){
	int i,j,c,q;
	
	c=col;
	q=0;
	
	for(i=0;i<fil;i++){
		c--;
		for(j=0;j<col;j++){
			if(j==c){
				q += mtz[i][j];
			}
		}
	}
	printf("La suma de la diagonal inferior de la matriz es %d \n", q);
  }


void producto(int fil, int col , int mtz[FIL][COL]){
	int i,j,q;
	
	q=1;
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			if(i>j){
				q *= mtz[i][j];
			}
		}
	}

	printf("\nEl producto de la diagonal inferior en la matriz  es: %d \n",q);
}

void mostrar(int fil, int col, int mtz[FIL][COL]){
	int i, j;
	printf("Los datos introducidos en su matriz son \n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("\nDato[%d][%d]: %d \n",i,j,mtz[i][j]);
		}
	}
}




















