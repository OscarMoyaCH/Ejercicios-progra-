#include<stdio.h>
#include<string.h>
#include<ctype.h>
void cad1(char*, char *);
int size1(char*);
int size2(char*);
void calculo(char*, char*,char*, int, int);
void mostrar(char* C, int s1, int s2);
#define MAX 50
int main(){
char A[MAX], B[MAX], C[100];
int s1, s2;
cad1(A, B);
s1=size1(A);
s2=size2(B);
calculo(A,B,C,s1,s2);
//calculo2(A,B,C,s1,s2);
 mostrar(C, s1, s2);
return 0;
}
void cad1(char* A, char* B){
  printf("introduce la cadena : \n");
  scanf("%[^\n]", A);
  getchar();
  printf("\nintroduce la segunda cadena  : \n");
  scanf("%[^\n]", B);
}

int size1(char * A){
  return strlen(A); 
}
int size2(char * B){
  return strlen(B); 
}
void calculo(char* A, char* B, char* C, int s1, int s2){
int i, j, k=s1+s2;
for(i=0, j=0; i<k+1; i++, j++){
    C[j]=A[i];//4
    j++;
    C[j]=B[i];//5
}
}
void mostrar(char* C, int s1, int s2){
  int i, k = s1+s2;
  for(i=0; i<k+1; i++){
    printf("%c", C[i]);
  }
}
