#include<stdio.h>

void numeroDatos(int* n);
void entradaDatos(int n, int * x);
void mostrar(int* x, int n);


#define MAX 50 
void main(){
	int x[MAX], n, num, r;
	
	numeroDatos(&n);
	entradaDatos(n, x);
	mostrar(x, n);

}

void numeroDatos(int* n){
	printf("Introduzca el numero de datos que desea ordenar \n");
	scanf("%d", n);
}

void entradaDatos(int n, int* x){
	int q;
	for(q=0;q<n;q++){
		printf("Ingrese el numero [%d]\n", q+1);
		scanf("%d", &x[q]);
	}
}

void mostrar(int* x, int n){
	int t, s;
	for(t=n-1;t>=0;t--){
	 printf("%d,",x[t]);
	}
}


