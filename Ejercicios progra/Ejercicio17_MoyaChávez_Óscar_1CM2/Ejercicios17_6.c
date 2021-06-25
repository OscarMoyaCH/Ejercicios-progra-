#include <stdio.h>
void numDatos(int* n);
void entDatos(int n, int* a);
void arreglo(int n, int* a);
void repeticiones(int n, int* a);
#define MAX 50

void main()
{
  int a[MAX], n;
  numDatos(&n);
  entDatos(n, a); 
  arreglo(n,a);
  repeticiones(n, a);
}

void numDatos(int* n)
{
  printf("Introduzca el numero de datos del arreglo en orden creciente, es posible poner un numero las veces que deseé \n");
  scanf("%d", n);
}

void entDatos(int n, int *a)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("Introduzca el valor numero[%d]: ", i+1);
    scanf("%d", &a[i]);
  }
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

void repeticiones(int n, int *a)
{
  int i, q, s, z, j, b[MAX];
  s=1;
  q=1;
  z=0;

  printf("\nEl arreglo con las repeticiones es el siguiente:");
  printf("\n[");
  for(i=0;i<n;i++)
  {
    if(a[i]==a[q])
    {
      s++;
    }
   else
    {
      b[z]=s;
      printf("%d,", b[z]);
      z++;
      s=1;
    }
    q+=1; 
  }
  printf("]");
}




