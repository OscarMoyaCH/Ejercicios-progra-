//problema 10
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define Tam 50

void dae(int *size);
void vec(float *A, int size, int i);
void media(int size, float *A, int i, float *prom);
void dev(int i, int size, float  prom, float *A);

int main(){
    int size, s, i;
    float prom;
    dae(&size);
    float A[Tam];
    vec(A, size, i);
    media(size, A, i, &prom);
    dev(i, size, prom, A);
    return 0;
}
void dae(int *size){
    printf("Introduce el tamano del vector: \n");
    scanf("%d", size);
    printf("\n");
    printf("\n");
}

void vec(float *A, int size, int i){
    printf("introduce los elementos del vector: \n");
    for(i = 0; i<size; i++){
        scanf("%f", &A[i]);
    }
    printf("\n");
    printf("\n");
}


void media(int size, float *A, int i, float *prom){
    float sig = 0;
    for(i = 0; i<size; i++){
    sig += A[i];
    }
    *prom = sig / size;
    printf("la media del arreglo es: %f \n", *prom);
    printf("\n");
}

void dev(int i, int size, float  prom, float *A){
	float v = 0, ar, S;
	for (i = 0; i < size; i++){
		v += pow((A[i] - prom),2);
	}
	ar = v / size;
	S = sqrt(ar);
	printf("la desviacion estadar = %f \n", S);
  printf("\n");
}
