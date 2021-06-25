#include <stdio.h>

void numDatos(int* n);
void entDatos(int n, int* a);
void numero(int* x1);
void arreglo(int n, int* a);
void calculo(int n, int* a, int* x1);
#define MAX 50

void main()
{
  int a[MAX], n, x1;
  numDatos(&n);
  entDatos(n, a); 
  numero(&x1);
  arreglo(n,a);
  calculo(n,a,&x1);
}
void numDatos(int* n)
{
  printf("Introduzca el tamaño del arreglo \n");
  scanf("%d", n);
}

void entDatos(int n, int* a)
{
  int i;
  for(i=0;i<n;i++)
  {
  printf("Introduzca el valor [%d]", i+1);
  scanf("%d", &a[i]);
  }
}

void numero(int *x1){
  printf("Introduzca el numero que desea buscar en en el arreglo \n ");
  scanf("%d", x1);
}

void arreglo(int n, int *a)
{
  int i;

  printf("\nEl arreglo es el siguiente: \n");
  printf("[");
  for(i=0;i<n;i++)
  {
    printf("%d,", a[i]);
  }
  printf("]");
}

void calculo(int n, int* a, int* x1)
{
  int i,z,j,b[MAX];
  z=0;
  j=0;

  printf("\nEl arreglo con las posiciones es: ");
  printf("\n[");
  for(i=0;i<n;i++)
  {
    if(a[i]==*x1)
    {
      z=i+1;
      b[j]=z;
      printf("%d,",b[j]);
      j++;
    }
  }
  printf("]");
}
