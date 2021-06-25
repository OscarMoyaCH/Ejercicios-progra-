//funciones de cabecera
#include<stdio.h>
#include <math.h>

//prototipos de funciones
void datosEntrada(float*);
void derivada(float*, float*,float*, float*, float*);
void mostrarResul(float*);

//funcion principal
void main(){
float x, der, a, b, c;
datosEntrada(&x);
derivada(&a, &b, &c, &der, &x);
mostrarResul(&der);
}

//cuerpo de las funciones
void datosEntrada(float*x){
printf("Introduzca el valor de x donde quiere evaluar la derivada de la función dada: \n");
scanf("%f", *&x);
}

void derivada(float*a, float *b, float *c, float*der, float*x){
*a=(2*(*x)+4);
*b=pow(*a,0.66);
*c=(3*(*b));
*der=2/(*c);
}

void mostrarResul(float*der){
printf("El valor de x evaluada en la derivada es: %f\n",*der);
}

