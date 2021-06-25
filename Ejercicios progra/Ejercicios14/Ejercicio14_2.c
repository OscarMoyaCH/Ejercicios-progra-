#include <stdio.h>
void dae(float*);
void calculo(float*);


int main(void) {
 float num;
 num = 0;
 dae(&num);
 calculo ( &num);
  return 0;
}

void dae(float* num){
  printf("Introduzca el numero entero  del que desea saber con cuantas cifras cuenta: \n");
  scanf("%f", *&num);
}

void calculo( float* num){
  int i;
  i = 0;
    do{
      *num /=10;
      
      i++;
    } while ( *num > 1);
    printf("Su numero cuenta con %d cifras \n", i);
}
		

