#include <stdio.h>
#include <stdlib.h>
void tam(int*size);
int *create(int size);
void dae(int *A, int size);
void id(int * A, int size, int i);
void ascdes(int *A, int size);
void men(int *A, int size);
void may(int * A, int * B, int size);
void mostrar(int * X, int size);
void liberar(int*A);

void main(){
	int *A, size;
	tam(&size);
	A = create(size);
	dae(A,size);
    ascdes(A, size);
	liberar(A);
}

void tam(int*size){
	printf("Indique la dimension del arreglo: \n");
	scanf("%d",size);
}

int * create(int size){
	int* Array;
	Array = (int*)malloc(size*sizeof(int));
	if(Array == NULL){
		printf("No hay espacio en la memoria...\n");
		exit(0);
	}
	return Array;
}

void dae(int *A, int size){
	int i;
	printf("Ingrese los datos del arreglo\n");
	for(i=0;i<size;i++){
        printf("A[%d]=",i);
		scanf("%d", &A[i]);
	}
    for(i=0; i<size; i++){
        id(A, size, i);
    }
}
void id(int * A, int size, int i){//identificar repetidos
    int j = 0, a = 0;
    for(j=0; j<size; j++){
        if(j != i){
            if(A[i] == A[j]){
            printf("Vlor repetido [%d], favor de cambiarlo. \n", j);
            printf("Introduce el nuevo valor en la posición A [%d] : \n", j);
            scanf("%d", &A[j]);
            }
    	}
	}
}

void ascdes(int *A, int size){
    int B[size];
    printf("\nEl numero menor formado es: ");
	men(A, size);
	mostrar(A, size);
    printf("\n");
    printf("\nEl numero mayor formado es: ");
    may(A , B, size);
	mostrar(B, size);
    printf("\n");
}
void men(int *A, int size){// ordenar menor
	int i, j, aux;
		for(i=0; i < size; i++){
			for(j=0; j < size-1; j++){
				if (A[j] > A[j+1]){
					aux = A[j+1];
					A[j+1] = A[j];
					A[j] = aux;
			}
		}
	}
}

void may(int * A, int * B, int size){// ordenar el mayor
    int ii, i, j, aux;
    for(ii=0; ii<size; ii++){
        B[ii] = A[ii];
    }
    for(i=0; i < size; i++){
			for(j=0; j < size-1; j++){
				if (B[j] < B[j+1]){
					aux = B[j+1];
					B[j+1] = B[j];
					B[j] = aux;
				}
			}
	}
}

void mostrar(int * X, int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d", X[i]);
	}
}

void liberar(int*A){// liberar memoria dinamica
	free(A);
	printf("\nMemoria Liberada...\n");
}





















