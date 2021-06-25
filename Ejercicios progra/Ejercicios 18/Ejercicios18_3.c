#include<stdio.h>
#define FIL 10
#define COL 10
#define MAX 10
void cf(int*, int*, int*, int*);
void llenarMTZ( int A[FIL][COL], int, int);
void llenarMTZ2(int B[FIL][COL], int, int);
void mostrar1(int A[FIL][COL], int, int, int* FILA, int* COLA);
void mostrar2(int B[FIL][COL], int, int, int* FILB, int* COLB);

int main(){
  int A[FIL][COL], B[FIL][COL],FILA[MAX], COLA[MAX], FILB[MAX], COLB[MAX], f1, c1, f2, c2;
 cf(&f1, &c1, &f2, &c2);
 llenarMTZ(  A, f1,c1);
 llenarMTZ2(  B, f2,c2);
  mostrar1( A, f1,c1, FILA, COLA);
 mostrar2( B, f2,c2, FILB, COLB);

}


void cf(int* f1, int* c1, int* f2, int* c2){
printf("INTRODUZCA EL NUMERO DE FILAS DE LA PRIMERA MATRIZ \n");
scanf("%d", f1);
printf("INTRODUZCA EL NUMERO DE COLUMNAS DE LA PRIMERA MATRIZ \n");
scanf("%d", c1);
printf("INTRODUZCA EL NUMERO DE FILAS DE LA SEGUNDA MATRIZ \n");
scanf("%d", f2);
printf("INTRODUZCA EL NUMERO DE COLUMNAS DE LA SEGUNDA MATRIZ \n");
scanf("%d", c2);
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


void llenarMTZ2(int B[FIL][COL], int f2, int c2){
 int i, j;
  printf("Introduzca los datos de la SEGUNDA matriz, SOLAMENTE ENTEROS:\n");
  for(i = 0; i < f2; i++){
        for(j = 0; j < c2; j++){
         printf("Dato [%d][%d]:", i,j);
        getchar();
        scanf("%d", &B[i][j]);
       
        }
      }
    printf("\n");
}

void mostrar1(int A[FIL][COL], int f1, int c1, int* FILA, int* COLA){
int i, j, q, n, m, k, kk=1;
q=0;
k=0;
for(i=0;i<f1;i++){
  for(j=0;j<c1;j++){
     q = (q+A[i][j]);
  }
  FILA[i]=q;
  printf("La suma de la columna [%d] es : [ %d ] \n", kk, FILA[i]);
  q=0;
  kk++;
}
for(n=0, i=0; n < c1; n++, i++){
  for(m=0, j=0;m<f1;m++, j++){
     k += A[j][i];
  }
  COLA[n] = k;
  printf("%d \t", COLA[n]);
  k=0;
}
printf("\n");
}

void mostrar2(int B[FIL][COL], int f2, int c2, int* FILB, int* COLB){
int i, j, q, n, m, k, kk=1;
q=0;
k=0;
for(i=0;i<f2;i++){
  for(j=0;j<c2;j++){
     q = (q+B[i][j]);
  }
  FILB[i]=q;
 printf("La suma de la columna [%d] es : [ %d ] \n", kk, FILB[i]);
  q=0;
  kk++;
}
for(n=0, i=0;n<c2;n++, i++){
  for(m=0,j=0;m<f2;m++, j++){
     k += B[j][i];
  }
  COLB[n]=k;
  printf("%d \t", COLB[n]);
  k=0;
}
printf("\n");
}  


