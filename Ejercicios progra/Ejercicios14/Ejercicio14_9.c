#include<stdio.h>
#include<math.h>

void entrada(float *a,float *b,float *c,float *d,float *e,float *f,float *x,float *y);
void calculo(float x,float y,float a, float b, float c);
void parabol();
void hiperbol();
void elips();
void cuadra(float x, float y);
void perte(float a, float b, float c, float d, float e, float f, float x, float y);

int main()
{
  float a,b,c,d,e,f,x,y;
  
  entrada(&a,&b,&c,&d,&e,&f,&x,&y);
  calculo(x,y,a,b,c);
  perte(a,b,c,d,e,f,x,y);
  return 0;
}

void entrada(float *a,float *b,float *c,float *d,float *e,float *f,float *x,float *y)
{
  printf("Introduzca el valor de A: \n");
  scanf("%f", a);
  printf("Introduzca el valor de B: \n");
  scanf("%f", b);
  printf("Introduzca el valor de C: \n");
  scanf("%f", c);
  printf("Introduzca el valor de D: \n");
  scanf("%f", d);
  printf("Introduzca el valor de E: \n");
  scanf("%f", e);
  printf("Introduzca el valor de F: \n");
  scanf("%f", f);
  printf("Introduzca el valor de X: \n");
  scanf("%f", x);
  printf("Introduzca el valor de Y: \n");
  scanf("%f", y);
}
void calculo(float x, float y, float a, float b, float c)
{
  float de;

  de = (pow(b,2)-(4*a*c));
  
  if(de > 0)
  {
    hiperbol();
  }
  else if(de == 0)
  {
    parabol();
  }
  else if(de < 0)
  {
    elips();
  }
  else
  {
    printf("No pertenece a niguna chavoooo \n");
  }

  cuadra(x,y);
} 

void hiperbol()
{
  printf("La grafica de la funcion es un Hiperbola \n");
}
void elips()
{
  printf("La grafica de la funcion es una elipse \n");
}
void parabol()
{
  printf("La grafica de la funcion es un parabola \n");
}

void cuadra(float x, float y)
{
  if(x>0 && y>0)
  {
    printf("El punto (%f,%f) está en el 1er cuadrante \n",x,y);
  }
  else if(x<0 && y>0)
  {
    printf("El punto (%f,%f) está en el 2do cuadrante \n",x,y);
  }
  else if (x<0 && y<0)
  {
    printf("El punto (%f,%f) está en el 3er cuadrante \n",x,y);
  }
  else if(x>0 && y<0)
  {
    printf("El punto (%f,%f) está en el 4to cuadrante \n",x,y);
  }
}

void perte(float a, float b, float c, float d, float e, float f, float x, float y)
{
  float z;

  z = (a*pow(x,2))+(b*x*y)-(c*pow(y,2))+(d*x)+(e*y)+f;

if (z == 0)
{
  printf("\nSi pertenece a la grafica");
}
else
{
  printf("\nNo pertenece a la grafica");
}
}
