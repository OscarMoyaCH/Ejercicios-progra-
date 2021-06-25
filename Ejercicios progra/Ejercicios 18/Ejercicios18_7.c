
#include <stdio.h>
#define FIL 2
#define COL 2
void relleno(int[FIL][COL]);
int main() {
    int mat[FIL][COL];
    relleno(mat);
}
void relleno(int mat[FIL][COL]){
    int x,y,z,c,d,f;
    d=1;
    c=1;
    printf("Introduzca datos");
    for(x=0;x<FIL;x++){
        for(y=0,z=0;y<COL;y++,z++){
            printf("\nDato[%d][%d]=",x,y);
            scanf("%d",&mat[x][y]);
            if(x==y){
                c*=mat[x][y];
            }
            else{
                d*=mat[x][y];
            }
        }
    }
    f=c-d;
    printf("La determinante es igual a: %d\n",f);
}
