//Problema 5 xd
#include<stdio.h>
#include<string.h>
#define Tam 50
void dae(char*);
int size(char*);
void id(char*, int, char*, int, int);
void cont(char*, char*, int, int);

int main(){
  char A[Tam];
  char d[26] = "abcdefghijklmnopqrstuvwxyz"; //Diccionario de A-Z
  int s, Z, i;
  dae(A); //llamada a datos de entrada
  s = size(A); // para sacar el tamaño
  id(A, Z, d, i, s); // la funcion de identificacion
  return 0;
}

void dae(char *A){
  printf("introduce la cadena a evaluar sin %n : \n");
  scanf("%[^\n]", A);
}
int size(char * A){
  return strlen(A); //Usamos strlen para saber el tamaño de la cadena
}

void id(char * A, int Z, char* d, int i, int s){
  for(i=0; i<25; i++){//i tiene que ser menor a 25 por las letras del abecedario
  cont(A, d, i, s); // llama a la funcion contador
  }
}

void cont(char* A, char* d, int i, int s){
  int j, c = 0; // contadores j para leer los valores de la cadena y c es el contador de letras
  char l; // la variable l va a almacenar la letra a evaluar
  for(j = 0; j < s-1; j++){ //se usa para leer los datos de la cadena
    if (A[j] == d[i]){ // comparacion para saber si coinciden las letras almacenadas en cada una
      c+=1; // aumenta nuestro contador si la comparacion se cumple
      l = d[i];// l va a almacenar el valor de la letra evaluada en el diccionario
    }
  }
if (c != 0){  // si el contador es diferente de 0 (si almaceno un valor se va a ejecutar el print)
  printf("La letra %c se repite %d veces. \n", l, c);// imprime las letras encontradas en el contador
}
}

