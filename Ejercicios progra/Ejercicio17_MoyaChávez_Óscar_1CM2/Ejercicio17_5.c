#include <stdio.h>
void numDatos(int* n);
void entDatos(int n, int* a);
void arreglo(int n, int* a);
void numcambio(int *x1, int *x2);
void cambio(int x1, int x2, int* a, int n);

#define MAX 50

int main()
{
  int a[MAX], n, x1, x2;
  numDatos(&n);
  entDatos(n, a);
  arreglo(n,a);
  numcambio(&x1, &x2);
  cambio(x1, x2, a, n);
}


void numDatos(int* n)
{
  printf("Introduzca el numero de datos del arreglo \n");
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

void numcambio(int *x1, int *x2)
{
  printf("\nIntroduzca los numeros que se van a cambiar");
  printf("\nPrimer posicion: ");
  scanf("%d", x1);
  printf("\nSegunda posicion: ");
  scanf("%d", x2);
}

void cambio(int x1, int x2, int *a, int n)
{
  int i, j, k;
  for (i=0;i<n;i++)
	{
		if((x1-1)==i)
		{
			printf("El numero de la posicion %d es %d \n", x1, a[i]);
      j = a[i];
		}	
    if((x2-1)==i)
		{
			printf("El numero de la posicion %d es %d ", x2, a[i]);
      k = a[i];
		}
	}

  for (i=0;i<n;i++)
	{
		if((x1-1)==i)
		{
      a[i]=k;
		}	
    if((x2-1)==i)
		{
      a[i]=j;
		}
	}

	arreglo(n,a);
}
