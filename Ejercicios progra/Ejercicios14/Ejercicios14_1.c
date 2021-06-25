#include <stdio.h>
#include<math.h>
#include<stdlib.h>

#define pi 3.1416

void menuprincipal(int *s);
void funcionestrigonometricas();
void funcionesmatematicas();

int main(){
  int s;
  menuprincipal(&s);
  return 0;
}

void menuprincipal(int *s){
  do {
    printf("Selecciona una de las siguientes tareas a realizar: \n1._ Funciones Trigonometricas \n2._Funciones Matematicas \n3._ Salir \n");
    scanf("%d", *&s);
    switch (*s) {
      case 1: funcionestrigonometricas(&s);
      break;
      case 2: funcionesmatematicas(&s);
      break;
      case 3: exit(0);
      default:printf("La opción no es valida prra \n");
    }
    } while (*s<=3 && *s > 0 && *s != 0);
  

}

void funcionestrigonometricas(int *s){
  int x;
  do {
  float i;
printf("Selecciona una de las 4 operaciones : \n1._Seno \n2._ Coseno \n3._Tangente \n4._ Volver al menu principal \n");
scanf ("%d", &x);
if(x==1){
printf("Introduzca el valor al que le desea sacar el seno en grados por favor bb \n");
scanf("%f", &i);
i= sin((i*pi)/180);
printf("El seno  es:  %f ", i);
}
else if(x==2){
  printf("Introduzca el valor al que le desea sacar el coseno en grados por favor bb \n");
  scanf("%f", &i);
  i=cos((i*(pi))/180);
  printf("El coseno  es: %f ", i);
}
else if(x==3){
   printf("Introduzca el valor al que le desea sacar la tangente en grados por favor bb \n");
  scanf("%f", &i);
  i=tan((i*pi)/180);
  printf("El tangente  es: %f ", i);
}
else if(x==4){
menuprincipal(s);
}
 
} while (x<=3 && x > 0 );
}

void funcionesmatematicas(int *s){
int j;
do {
float q;
float z;
printf("Selecciona una de las siguientes operaciones matematicas: \n1._Elevar su numero a cualquier potencia \n 2._Raiz cuadrada de su numero \n3._El logaritmo de su numero \n4._Volver al menu principal \n");
scanf("%d", &j);
  if(j==1){
  printf("Introduzca el numero que desea elevar al cuadrado \n");
  scanf("%f", &q);
  printf("Introduzca la potencia a la que eleará el numero \n");
  scanf("%f", &z);
  q=pow(q,z);
  printf("La potencia es %f", q);
}
else if(j==2){
  printf("Introduzca el numero al que desea sacarle raiz  \n");
  scanf("%f", &q);
  q=sqrt(q);
 printf("La raiz es %f \n", q);
}
else if(j==3){
   printf("Introduzca el numero  al que desea sacarle logaritmo  \n");
  scanf("%f", &q);
  q=log(q);
  printf("El logaritmo es %d", j);
}
else if (j==4){
  menuprincipal(s);
}

}while (j<=3 && j > 0 && j != 0);
}
