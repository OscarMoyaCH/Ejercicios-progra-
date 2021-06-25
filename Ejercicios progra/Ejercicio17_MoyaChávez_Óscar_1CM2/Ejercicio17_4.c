#include<stdio.h>
void numeroDatos(int* n);
void arr1(int* x, int n);
void arr2(int* x, int n);
void suma(int* x, int*y, int* z, int n);
void mostrar(int* z, int n);
#define MAX 50
void main(){
	int x[MAX], y[MAX],z[MAX], n;
	
	numeroDatos( &n);
	arr1(x,n);
	arr2(y,n);
	suma(x, y, z, n);
	mostrar(z, n);
}

void numeroDatos(int* n){
	printf("Introduzca el numero de datos de los dos arreglos \n");
	scanf("%d", n);
}

void arr1(int* x, int n){
	int i;
	for(i=0;i<n;i++){
		printf("Introduce el dato [%d] del arreglo 1 \n", i+1);
		scanf("%d", &x[i]);
	}
}

void arr2(int* y, int n){
	int i;
	for(i=0;i<n;i++){
		printf("Introduce el dato [%d] del arreglo 2 \n", i+1);
		scanf("%d", &y[i]);
	}
}

void suma(int* x, int* y, int* z, int n){
	int v;
	for(v=0;v<n;v++){
		 z[v]=x[v]+y[v];
		 }
	}


void mostrar(int* z, int n){
	int q;
	for(q=0;q<n;q++){
		printf("%d,", z[q]);
	}
}










