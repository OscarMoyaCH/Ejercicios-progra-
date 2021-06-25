 #include<stdio.h>
#define FIL 10
#define COL 10
void cf(int*, int*);
void llenarMTZ( char R[FIL][COL], int, int);
void transposition(char R[FIL][COL],char RT[FIL][COL], int, int);
void mostrar1(char R[FIL][COL], int, int);
void mostrar2(char RT[FIL][COL], int, int);

void main()
{
printf("[\t the woki \t]\n");
char R[FIL][COL],RT[FIL][COL];
int f, c;
cf(&f, &c);
llenarMTZ(R, f, c);
transposition( R, RT, f, c);
mostrar1( R, f, c);
mostrar2( RT, f, c);
}
void cf(int* f, int* c)
{
  printf("INTRODUZCA EL NUMERO DE FILAS DE LA MATRIZ \n");
  scanf("%d", f);
  printf("INTRODUZCA EL NUMERO DE COLUMNAS DE LA MATRIZ \n");
  scanf("%d", c);
}

void llenarMTZ( char R[FIL][COL], int f, int c)
{
  int i, j;
  printf("INTRODUZCA LOS DATOS DE LA MATRIZ, SOLAMENTE NUMEROS ENTEROS PLS\n");
  for(i=0;i<f;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("Dato[%d][%d]", i,j);
      getchar();
      scanf("%c", &R[i][j]);
    }
  }
}

void transposition(char R[FIL][COL],char RT[FIL][COL], int f, int c)
{
  int f1, c1, i, j;
  f1=0;
  c1=0;
  for(i=0;i<f;i++)
  {
 c1++;
    for(j=0;j<c;j++)
    {
    f1++;
      RT[j][i]= R[i][j];
    }
  }

}

void mostrar1(char R[FIL][COL], int f, int c)
{
int i, j;
printf(" \nLos datos de la matriz son \n");
for(i=0; i<f; i++)
{
  for(j=0; j<c; j++)
  {
printf("[%c]",R[i][j]);
  }
  printf("\n");
}
}


void mostrar2(char RT[FIL][COL], int f, int c)
{
int i, j;
printf(" \nLos datos de la matriz transpuesta son \n");
for(i=0; i<c; i++)
{
  for(j=0; j<f; j++)
  {
printf("[%c]",RT[i][j]);
  }
  printf("\n");
}
}

