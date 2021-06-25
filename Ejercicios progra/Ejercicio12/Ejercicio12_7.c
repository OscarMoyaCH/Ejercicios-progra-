#include<stdio.h>

void entradaDatos(int*);
void calculo(int*, int*, int*);


void main(){
	int num, x, a;
	entradaDatos(&num);
	calculo(&num, &x, &a);	
  a=0;

}

void entradaDatos(int* num){
	printf("Ingrese el numero del que desea saber la sumatoria \n");
	scanf("%d", num);
}

void calculo( int* num, int* x, int* a){
      do{
		*x= *num%10;
		*a += *x;
		*num=*num/10;
	}	while(*num>0);
		printf("La suma de los digitos del numero es:%d \n", *a);
}


