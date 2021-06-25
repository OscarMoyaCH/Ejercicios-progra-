#include <stdio.h>
void dae(float*);
void regalo (float*);

int main(void) {
 float pres;
 dae (&pres);
 regalo (&pres);
  return 0;
}

void dae(float* pres){
printf("Introduce el dinero que tienes para el regalo de tu ruka mijo \n");
scanf("%f", *&pres);
}

void regalo (float* pres){
  if (*pres<=10 && *pres >0){
    printf("Comprale una tarjeta de regalo papi \n");
  }
  else if (*pres>=11 && *pres<=100){
    printf("Comprale unos chocolates boy \n");
  }
  else if(*pres>=101 && *pres <=250){
    printf("Comprale unas flores papi \n");
  }
  else if (*pres>=251) {
    printf("Buena crack ármale un anillo perrón \n");
  }
  else  {
    printf("hijole chavo, mejor ponte a jalar ");
  }
}


