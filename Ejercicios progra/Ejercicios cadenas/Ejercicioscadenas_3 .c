#include<stdio.h>
#include<string.h>
void cadena1(char*);
void cadena2(char*);
int longitud1(char*);
int longitud2(char*);
void mayormenor(int, int, char*, char*, char*);

void main(){
char cad1[80], cad2[80], cad3[80];
int tam1, tam2;
cadena1(cad1);
getchar();
cadena2(cad2);
tam1=longitud1(cad1);
tam2=longitud2(cad2);
mayormenor(tam1, tam2, cad1, cad2, cad3);
}


void cadena1(char* cad1){
	printf("Introduzca el primer vector con caracteres unicamente por favor \n");
	scanf("%[^\n]", cad1);
}

void cadena2(char* cad2){
	printf("Introduzca el segundo vector por favor \n");
	scanf("%[^\n]", cad2);
}

int longitud1(char* cad1){
	return(strlen(cad1));
}

int longitud2(char* cad2){
	return(strlen(cad2));
}

void mayormenor(int tam1, int tam2, char* cad1, char* cad2, char* cad3){
	int i; 
	if(tam1<tam2){
		strcpy(cad3,cad2);
		printf("La cadena es: \n");
		for(i=0;cad2[i] != '\0'; i++)
          printf("%c ",cad2[i]);
		
		}
	else if (cad1>cad2){
			printf("La cadena 1 es %s \n", cad1);
			printf("La cadena 2 es %s \n", cad2);
				strcat(cad1, cad2);
				strcpy(cad3, cad1);
				printf("La cadena 3 es: %s \n", cad3);
	}

}
 

 
 
 
 
 
 
 
 
