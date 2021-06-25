#include<stdio.h>
void numeroDatos(int* n);
void arr1(float* x, int n);
void arr2(float* y, int n);
void suma(float* x, float*y, float* z, int n);
void mostrar(float* z, int n);
#define MAX 50
int main(){
	int n;
  float x[MAX],  y[MAX], z[MAX];
	
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

void arr1(float* x, int n){
	int i;
	for(i=0;i<n;i++){
		printf("Introduce el dato [%d] del arreglo 1 \n", i+1);
		scanf("%f", &x[i]);
	}
}

void arr2(float* y, int n){
	int i;
	for(i=0;i<n;i++){
		printf("Introduce el dato [%d] del arreglo 2 \n", i+1);
		scanf("%f", &y[i]);
	}
}

void suma(float* x, float* y, float* z, int n){
	int v;
	for(v=0;v<n;v++)
  {
		z[v]=(x[v]*y[v]);
  }
}


void mostrar(float* z, int n){
	int q;
	for(q=0;q<n;q++){
		printf("%f,", z[q]);
	}
}




