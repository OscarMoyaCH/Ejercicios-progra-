#include<stdio.h>
void numeroCalif(int* n);
void insertarCalif(float* x, int n);
void promedio(float* prom, float* x, int n);
void promedio2(float*prom, float* prom2, int n);
void ar(float* x, int n, int p);
void mostrar(float* x, int p);
void mostrar2(float* x, int p);
void mostrar3(float*);


#define MAX 50 
void main(){
	float x[MAX], prom, prom2;
	int n, p;
	numeroCalif(&n);
	insertarCalif(x, n);
	prom=0;
    promedio(&prom, x, n);
	promedio2(&prom, &prom2, n);
    ar(x, n, p);
    mostrar3(&prom2);
}


void numeroCalif(int* n){
	printf("Inserte el numero de calificaciones a evaluar \n");
	scanf("%d", n);
}

void insertarCalif(float* x, int n){
	int q;
	for(q=0;q<n;q++){
		printf("Ingrese la calificacion [%d]\n", q+1);
		scanf("%f", &x[q]);
	}
}

void promedio(float* prom, float* x, int n){
	int r;
	for(r=0;r<n;r++){
		*prom=(*prom+x[r]);
	}
}

void promedio2(float* prom, float* prom2, int n){
	*prom2= (*prom/n);
}

void ar(float* x, int n, int p){
for(p=0;p<n;p++){
if(x[p]<6){
	mostrar(x, p);
}
else{
mostrar2(x, p);	
}
}
}
void mostrar(float* x, int p){
	printf("La calificacion %f es reprobatoria\n", x[p]);
}
void mostrar2(float* x, int p){
	printf("La calificacion %f es aprobatoria\n", x[p]);
} 

void mostrar3(float* prom2){
	printf("El promedio de calificaciones es %f \n", *prom2);
}












