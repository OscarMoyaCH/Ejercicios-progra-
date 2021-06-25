#include<stdio.h>
#define FIL 100
#define COL 100
void llenarMTZ(int B[FIL][COL]);
void mostrar(int B[FIL][COL]);
void main(){
    int B[FIL][COL];
    llenarMTZ(B);
    mostrar(B);
}
//llenar con 0´s
void llenarMTZ(int B[FIL][COL]){
    int i, j;
    for(i = 0; i<FIL; i++){
        for(j=0; j<COL; j++){
            if(i == j){
                B[i][j] = 1;
            }
            else{
                B[i][j]= 0;
            }
        }
    }
}
//mostrar
void mostrar(int B[FIL][COL]){
    int i, j;
    for(i=0; i<FIL; i++){
        for(j=0; j<COL; j++){
            printf("%d", B[i][j]);
        }
        printf("\n");
    }
}
