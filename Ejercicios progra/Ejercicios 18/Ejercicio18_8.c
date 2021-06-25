#include <stdio.h>
#define TAM 10
void tamao(int*n, int*m, int*k);
void llenarMtz(float R[TAM][TAM], int n, int m);
void impmtz(int n, int m, float R[TAM][TAM]);
void nulo(float R[TAM][TAM], int n, int m);
void muldiv(float R[TAM][TAM], int n, int m, int k);
void inferior(float R[TAM][TAM], int n, int m);

int main() 
{
  float R[TAM][TAM];
  int n, m, k;
  tamao(&n,&m,&k);
  llenarMtz(R,n,m);
  impmtz(n, m, R);
  nulo(R,n,m);
  muldiv(R, n, m, k);
  inferior(R,n,m);
  return 0;
  
}

void tamao(int*n, int*m, int*k)
{
  printf("INTRODUZCA EL NUMERO DE LAS FILAS: ");
  scanf("%d",n);
  printf("INTRODUZCA EL NUMERO DE LAS COLUMNAS: ");
  scanf("%d",m);
  printf("INTRODUZCA SU CONSTANTE K:  ");
  scanf("%d", k);
  printf("\n");
}


void llenarMtz(float R[TAM][TAM], int n, int m)
{

int i, j;

  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      printf("Dato[%d][%d]: ",i , j);
      scanf("%f", &R[i][j]);
    }
  }
  printf("\n");
}

void impmtz(int n, int m, float R[TAM][TAM]){//imprime matriz
  
  int i, j;
  
  for (i=0; i<n; i++)
  {
    for  (j=0; j<m; j++)
    {
      printf("\t [%f]", R[i][j]);
    
    }
    printf("\n");
  }
  printf("\n");
}

void nulo(float R[TAM][TAM], int n, int m)
{
  int i,j,x,y;

  x=n*m;
  y=0;

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      if(R[i][j]==0)
      {
        y++;
      }
    }
  }

  if(y==x)
  {
    printf("La matriz es nula \n");
  }
  else
  {
    printf("La matriz NO es nula \n");
  }
  printf("\n");
}


void muldiv(float R[TAM][TAM], int n, int m, int k){
  //printf("%d \n", k);
  int i, j;
  float aux;

  float Mul[TAM][TAM], Div[TAM][TAM];
  
  for(i=0; i<n; i++){//mul & div matriz
    for(j=0; j<m; j++){
      aux = R[i][j];
      Mul[i][j] = aux * k;
      Div[i][j] = aux / k;
    }
  }
  for(i=0; i<n; i++){//imp
    for(j=0; j<m; j++){
      printf("Mul[%d][%d]: [%.2f] \t", i, j, Mul[i][j]);
      printf("Div[%d][%d]: [%.2f] \n", i , j, Div[i][j]);
    }
  }
  printf("\n");
}

void inferior(float R[TAM][TAM], int n, int m)
{
  int i,j,x,y;

  x=0;
  y=0;

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      if(i>j)
      {
        if(R[i][j]==0)
        {
          y++;
        }
        x++;
      }
    }
  }

  if((x==y)&&(n==m))
  {
    printf("Se cumple una matriz triangular superior");
  }
  else
  {
    printf("NO se cumple una matriz triangular superior");
  }
}
