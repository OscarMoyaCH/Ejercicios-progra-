#include<stdio.h>
#include<stdlib.h>
#define Max 50

void menu(int *s, int * size, int i, float *V);
void dae(int *size);
void dat(int i, int *size, float * V);
void sel(int *size, int i, float * V);
void bur(int * size, float *V, int i);
void el(int *size,float *V, int i);

void main(){
	int s, size, i;
    float V[Max];
    menu(&s, &size, i, V);
}

void menu(int *s, int * size, int i, float * V){
  do {
  	printf("\t \t [Hola Bienvenido] \n");
    printf("Selecciona una de las siguientes tareas a realizar: \n[1] Dimension del vector  \n[2] Introduccion de datos \n[3] Ordenar elementos en orden creciente por metodo de seleccion \n[4] Ordenar los elementos en orden decreciente por metodo burbuja \n[5] Mostrar los elementos del vector \n[6] Salir \n");
    scanf("%d", *&s);
    printf("\n");
    switch (*s) {
      case 1:dae(size);
      break;
      case 2: dat(i, size, V);
      break;
      case 3: sel(size, i, V);
      break;
      case 4: bur(size, V, i);
      break;
      case 5: el(size, V, i);
      break;
      case 6: exit(0);
      default:printf("La opción no es valida prra \n");
    }
    } while (*s<=6 && *s > 0 && *s != 0);
}

void dae(int *size){
    printf("Introduce la medida del vector: \n");
    scanf("%d", size);
    printf("\n");
}

void dat(int i, int *size, float * V){
    printf("introduce los valores del vector: \n");
    for(i = 0; i < *size; i++){
    scanf("%f", &V[i]);
    }
    printf("\n");
}

void sel(int *size, int i, float *V){
	int min, j;
	float aux;
		for(i = 0; i < *size -1; i++){
		min = i;
			for (j = i+1; j < *size; j++){
				if (V[j] < V[min]){
				min = j;
		if(i != min){
		aux = V[i];
		V[i] = V[min];
		V[min] = aux;
}
}
}
}
	for (i = 0; i<*size; i++){
		printf("%f \t", V[i]);
	}
	printf(" \n");
	printf(" \n");
}

void bur(int * size, float *V, int i){
	int j, a;
	float aux, temp;
	for(j = 0; j <= *size; j++){
		
		for(i = 0; i <*size - 1; i++){
			
			if(V[i] > V[i+1]){
				temp= V[i];
				V[i] = V[i+1];
				V[i+1] = temp;
			}
		}
	}
	printf("La ordenacion por burbuja es: \n");
	for (i = *size - 1; i >= 0; i--){
		printf("%f \t", V[i]);
	}
	printf(" \n");
	printf(" \n");
}

void el(int *size,float *V, int i){
	for(i = *size-1; i>=0; i--){
	printf("%f \t", V[i]);
}
	printf(" \n");
	printf(" \n");
}
