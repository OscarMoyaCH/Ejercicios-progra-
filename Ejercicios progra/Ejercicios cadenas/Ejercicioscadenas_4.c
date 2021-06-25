#include<stdio.h>
#include<string.h>
void cadena(char*);
void ciclo(char*, char);
void mostrar(char*);
#define MAX 50
void main(){
	char cad[50], aux;
	cadena(cad);
	ciclo(cad, aux);
	mostrar(cad);
}

void cadena(char* cad){
	printf("Ingrese la plabara que desea acomodar \n");
	scanf("%[^\n]", cad);
}

void ciclo(char* cad, char aux){
	int i, j;
	for(i=0;cad[i];i++){
		for(j=0;cad[j];j++){
			if(cad[j]>cad[i]){
				aux=cad[j];
				cad[j]=cad[i];
				cad[i]=aux;		
				
			}
		}
	} 
}

void mostrar(char* cad){
	printf("La cadena ordenada alfabeticamente es %s ", cad);
}
