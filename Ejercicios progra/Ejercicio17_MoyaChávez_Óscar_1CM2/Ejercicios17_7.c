#include <stdio.h>
void numDatos(int* n);
void entDatos(int n, int* a);
void calculo(int n, int* a );
void arreglo(int n, int *a);

#define MAX 50

int main()
{
  int a[MAX], n;
  numDatos(&n);
  entDatos(n, a); 
  arreglo(n,a);
  calculo(n,a);
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

void calculo(int n, int* a)
{
  int i,c;
  c=0;

  for(i=0;i<n;i++)
  {
    if(a[i]==0)
    {
      c++;
    }
    else if(a[i]%10==0)
    {
      while(a[i]%10==0)
      {
        c++;
        a[i]/=10;
      }
    }
  }

  printf("\nEl numero de ceros es: %d", c);
}
