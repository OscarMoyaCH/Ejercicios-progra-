#include <stdio.h>
void buenf(float*);
void paquetes(float*);

int main(){
  float dinero;
  buenf(&dinero);
  paquetes(&dinero);

}

void buenf(float* dinero){
  printf("Introduce el dinero que recibiste del buen fin \n");
  scanf("%f", dinero);
}

void paquetes(float* dinero){
  if(*dinero >= 50000){
    printf("Puedes comprar una televisión , un modular, tres pares de zapatos, cinco camisas y cinco pantalones\n");
  }
  else if(*dinero < 50000 && *dinero >= 20000){
    printf("Puedes comprar una grabadora, tres pares de zapatos, cinco camisas y cinco pantalones \n");
  }
  else if(*dinero < 20000 && *dinero >= 10000){
    printf("Puedes comprar dos pares de zapatos, tres camisas y tres pantalones \n");
  }
  else if (*dinero < 10000){
    printf("Te alcanza para un par de zapatos, dos camisas y dos pantalones mi chavo \n");
  }
}
