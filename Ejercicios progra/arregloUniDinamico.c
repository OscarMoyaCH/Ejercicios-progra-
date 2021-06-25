#include<stdio.h>
#include<stdlib.h>
void darDim(int*);
int *crearArregloUni(int);
void darDatos(int*, int);
void mostrar(int*, int);
void liberar(int*);
void redimensionar(int*, int*);

void main()
{
	int *A, elem;
	darDim(&elem);
	A=crearArregloUni(elem);
	darDatos(A, elem);
	mostrar(A, elem);
	liberar(A);
	redimensionar( A, &elem);
}

void darDim(int* elem)
{
	printf("Indique la dimension del arreglo \n");
	scanf("%d", elem);
}

int *crearArregloUni(int elem)
{
	int * A;
	A=(int*)malloc(elem*sizeof(int));
	if(A==NULL)
	{
		printf("No hay memoria disponible \n");
		exit(0);
	}
	return A;
}

void darDatos(int* A, int elem)
{
	int i;
	printf("Ingrese los datos del arreglo \n");
	for(i=0;i<elem;i++)
	{
		printf("\nA[%d]=", i+1);
		scanf("%d", &A[i]);
	}
}

void mostrar(int* A, int elem)
{
	int i;
	printf("Los datos del arreglo son: \n");
	for(i=0;i<elem;i++)
	{
		printf("A[%d]=%d\n", i+1,A[i]);
	}
}

void liberar(int* A)
{
	free(A);
	printf("\nMemoria liberada...\n");
}

void redimensionar(int* A, int* elem)
{
	int i, n, nvotam, *B;
	printf("¿Cuantos elementos vas a agregar \n");
	scanf("%d", &n);
	nvotam=(*elem)+n;
	B=(int*)realloc(A, nvotam * sizeof(int));
	for(i=(*elem);i<nvotam;i++)
	{
	printf("\nA[%d]=", i+1);
	scanf("%d", &B[i]);
    }
(*elem)=nvotam;
A=B;
}




















