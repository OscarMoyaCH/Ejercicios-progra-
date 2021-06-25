#include<stdio.h>
#define FIL 10
#define COL 10
void cf(int*, int*);
void llenarMTZ(char A[FIL][COL], int, int);
void mostrar(char A[FIL][COL], int, int);
void mostrar2(char A[FIL][COL], int, int);

int main(){
char A[FIL][COL];
int f, c;
cf(&f, &c);
llenarMTZ(A, f, c);
mostrar(A, f, c);
mostrar2(A, f, c);
}

void cf(int* f, int* c){
  printf("INTRODUZCA EL NUMERO DE FILAS \n");
  scanf("%d", f);
  printf("INTRODUZCA EL NUMERO DE COLUMNAS \n");
  scanf("%d", c);
}


void llenarMTZ(char A[FIL][COL], int f, int c){
  int i, j;
  printf("Introduzca los datos de la matriz, SOLAMENTE CARACTERES:\n");
  for(i = 0; i < f; i++){
        for(j = 0; j < c; j++){
         printf("Dato [%d][%d]:", i,j);
        getchar();
        scanf("%c", &A[i][j]);
       
        }
      }
}
//filas 
void mostrar(char A[FIL][COL], int f, int c){
  int i, j;
      for(i=0; i<c; i++){
        printf("columna[%d]: \n", i);
        for(j=0; j<f; j++){
            printf("[ %c ] \n", A[j][i]);
        }
        printf("\n");
    }
}
//columnas
void mostrar2(char A[FIL][COL], int f, int c){
  int i, j;
      for(i=0; i<f; i++){
        printf("\n columna [%d]: \n", i);
        for(j=0; j<c; j++){
        printf(" [%c] ", A[i][j]);
        }
        printf("\n");
    }
}
