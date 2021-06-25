
//funciones de cabecera
#include<stdio.h>
#include <math.h>

//prototipos de funciones
void datosEntrada(float*);
void derivada(float*, float*,float*, float*, float*, float*, float*, float*, float*, float*);
void mostrarResul(float*);

//funcion principal
void main(){
float x, der, a, b, c, d, p, q1, q2, q3;
datosEntrada(&x);
derivada(&a, &b, &c, &d, &p, &q1, &q2, &q3, &der, &x);
mostrarResul(&der);
}

//cuerpo de las funciones
void datosEntrada(float*x){
printf("Introduzca el valor de x donde quiere evaluar la derivada de la función dada: \n");
scanf("%f", *&x);
}

void derivada(float*a, float *b, float *c, float*d, float*p, float*q1, float*q2, float*q3, float*der, float*x){
*a=pow(*x,0.66);
*b=pow(*x,0.16);
*c=sqrt(*x);
*d=pow(*x, 0.33);
*p=(6*(*a) + 3*(*b)+ 2);
*q1=(*x + *c +*d);
*q2=sqrt(*q1);
*q3=(12*(*a)*(*q2));
*der= ((*p)/(*q3));
}
void mostrarResul(float*der){
printf("El valor de x evaluada en la derivada es: %f\n",*der);
}

