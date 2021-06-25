#include <stdio.h>
#include<stdlib.h>
#define FIL 10
#define COL 10
void cf(int*, int*);
void llenarMTZ( int A[FIL][COL], int, int);
void llenarMTZ2(int B[FIL][COL], int, int);
void menu(int A[FIL][COL],  int B[FIL][COL], int f1, int c1);
void suma(int A[FIL][COL], int B[FIL][COL], int, int);
void resta(int A[FIL][COL], int B[FIL][COL], int, int);
void multiplicacion(int A[FIL][COL],  int B[FIL][COL], int f1, int c1);

void main()
{
  int A[FIL][COL], B[FIL][COL], f1, c1;
 cf(&f1, &c1);
 llenarMTZ(  A, f1,c1);
 llenarMTZ2(  B, f1, c1);
 menu(A,B, f1,c1);
}

void cf(int* f1, int* c1)
{
printf("INTRODUZCA EL NUMERO DE FILAS DE LAS MATRIZES \n");
scanf("%d", f1);
printf("INTRODUZCA EL NUMERO DE COLUMNAS DE LAS MATRIZES \n");
scanf("%d", c1);
}

void llenarMTZ( int A[FIL][COL], int f1, int c1){
   int i, j;
  printf("Introduzca los datos de la matriz, SOLAMENTE ENTEROS:\n");
  for(i = 0; i < f1; i++){
        for(j = 0; j < c1; j++){
         printf("Dato [%d][%d]:", i,j);
        getchar();
        scanf("%d", &A[i][j]);
        }
      }
    printf("\n");
}

void llenarMTZ2(int B[FIL][COL], int f1, int c1){
 int i, j;
  printf("Introduzca los datos de la SEGUNDA matriz, SOLAMENTE ENTEROS:\n");
  for(i = 0; i < f1; i++){
        for(j = 0; j < c1; j++){
         printf("Dato [%d][%d]:", i,j);
        getchar();
        scanf("%d", &B[i][j]);
       
        }
      }
    printf("\n");
}

void menu(int A[FIL][COL],  int B[FIL][COL], int f1, int c1)
{
  int op;
do{
  printf("Seleccione la opcíon desdeada por favor \n");
  printf("1.-Suma \n");
  printf("2.-Resta \n");
  printf("3.-Multiplicación \n");
  printf("4.- Salir \n");
  scanf("%d", &op);
  switch(op)
  {
    case 1: suma(A, B, f1, c1);
    break;
    case 2: resta(A, B, f1, c1);
    break;
    case 3: multiplicacion(A, B, f1, c1);
    break;
    case 4: exit(0);
    default: printf("No pongas sandeses maestro, aprenda a leer \n");
  }
}while(op!=4);
}

void suma( int A[FIL][COL],  int B[FIL][COL], int f1, int c1)
{
int i,j,k, h, aux1, aux2;
int C[FIL][COL];
for(i=0;i<f1;i++)
  {
    for(j=0;j<c1;j++)
    {
      aux1 = A[i][j];
      aux2 = B[i][j];
      C[i][j] = (aux1 * 2) + (aux2 * 6);
    }
  }
printf(" \nLos datos de la matriz son \n");
for(k=0; k < f1; k++)
{
  for(h=0; h < c1; h++)
  {
printf("\t [%d]", C[k][h]);
  }
  printf("\n");
}
}

void resta(int A[FIL][COL],  int B[FIL][COL], int f1, int c1)
{
int i,j,k, h, aux1, aux2;
int C[FIL][COL];
for(i=0;i<f1;i++)
  {
    for(j=0;j<c1;j++)
    {
      aux1 = A[i][j];
      aux2 = B[i][j];
      C[i][j] = (aux1 * 3) - (aux2 * 5);
    }
  }
printf(" \nLos datos de la matriz son \n");
for(k=0; k < f1; k++)
{
  for(h=0; h < c1; h++)
  {
printf("\t [%d]", C[k][h]);
  }
  printf("\n");
}
}
void multiplicacion(int A[FIL][COL],  int B[FIL][COL], int f1, int c1)
{
int i,j,k, h, aux1, aux2;
int C[FIL][COL];
for(i=0;i<f1;i++)
  {
    for(j=0;j<c1;j++)
    {
      aux1 = A[i][j];
      aux2 = B[i][j];
      C[i][j] = (aux1)* (aux2);
    }
  }
printf(" \nLos datos de la matriz son \n");
for(k=0; k < f1; k++)
{
  for(h=0; h < c1; h++)
  {
printf("\t [%d]", C[k][h]);
  }
  printf("\n");
}
}

