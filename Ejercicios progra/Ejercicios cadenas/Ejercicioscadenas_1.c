#include<stdio.h>
#include<string.h>

void leeCad(char*);
void leeCad2(char*);
void uneCad(char*, char*);
void mostrarCadena(char*);
#define MAX 50 
void main(){
char cad1[MAX], cad2[MAX];

leeCad(cad1);
getchar();
leeCad2(cad2);
uneCad(cad1, cad2);
mostrarCadena(cad1);
}

void leeCad(char* cad1){
	printf("Introduzca su nombre \n");
	scanf("%[^\n]" , cad1);
}
void leeCad2(char* cad2){
	printf("Introduzca sus apellidos \n");
	scanf("%[^\n]", cad2);
}
void uneCad(char* cad1, char* cad2){
	strcat(cad1, cad2);
}

void mostrarCadena(char* cad1){
	printf("Su nombre es: %s \n", cad1);
}
