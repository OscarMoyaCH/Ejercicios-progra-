#include<stdio.h>
#include<string.h>
#include <ctype.h>

void cadena(char*);
int size(char*);

void copy(char *cad, int s, char *b); 
void calculo(char* cad, int s, char * b);
void mostrar(char* cad, int s, char *b);
#define MAX 50
int main(){
  int s;
  char cad[MAX], b[MAX];
  cadena(cad);
  s = size(cad);
  copy(cad, s, b);
  calculo(cad,s, b);
  mostrar(cad, s, b);
  return 0;
}


void cadena(char* cad){
  printf("Introduzca la cadena \n");
    scanf("%[^\n]", cad);
}

int size(char * cad){
  return strlen(cad);
}

void copy(char *cad, int s, char *b){
  int k;
    for(k=0; k<s; k++){
    b[k] = cad[k];
  }
}
void calculo(char* cad, int s, char * b){
  
  int i = s-1;
  char l, k;
  
  b[0] = toupper(cad[0]);
  b[i] = toupper(cad[i]); //webos 
for(i=0;i<s-1;i++){
if(cad[i] == ' ' ){
   l = toupper(cad[i-1]);
   k = toupper(cad[i+1]);
   b[i-1] = l;
   b[i+1] = k;
 }
 }
}
  
 void mostrar(char* cad, int s, char *b){
   int i, j;
   for(i=0; i<s; i++){
   printf("%c", b[i]);
   }
   //printf("\n");
   //for (j=0; j<s; j++){
       //printf("%c", cad[j]);
   }
 
