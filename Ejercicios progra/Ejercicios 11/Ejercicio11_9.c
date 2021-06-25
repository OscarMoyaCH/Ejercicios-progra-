#include<stdio.h>

 void entradaDatos(int*);
 void pi(int*);

 
void main(){
	int num;
	entradaDatos(&num);
	pi(&num);
}

void entradaDatos(int* num){
printf("Introduzca el numero \n");
scanf("%d", num);	
}

void  pi(int *num){
	if (*num%2==0){
		printf("El numero %d es par \n", *num);
	}
	else{
		printf("El numero %d es impar \n", *num);
	}
}
