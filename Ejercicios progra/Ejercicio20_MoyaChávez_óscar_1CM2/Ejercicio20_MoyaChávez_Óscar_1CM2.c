#include<stdio.h>
#include<stdlib.h>
void darDimMtz(int*,int*);
int **crearMatriz(int , int);
void darDatosMtz(int**, int,int);
int *crearArregloUni(int);
void sMTZ(int**,int, int ,int*,int*);
void mMtz(int**,int , int , int*, int*);
void lMtz(int**,int);
void lV(int* ,int*);

void main()
{
	int fil,col,**mtz, *f1, *c1;
	
	darDimMtz(&fil,&col);
	mtz=crearMatriz(fil,col);
	darDatosMtz(mtz,fil,col);
	f1 = crearArregloUni(fil);
	c1 = crearArregloUni(col);
	sMTZ(mtz,fil,col,f1,c1);
	mMtz(mtz,fil,col,f1,c1);
	lV(f1,c1);
	lMtz(mtz,fil);
}
void darDimMtz(int*fil,int*col)
{
	printf("Indique el numero de filas");
	scanf("%d",fil);
	printf("Indique el numero de columnas");
	scanf("%d",col);
}
int **crearMatriz(int fil, int col)
{
	int **mtz,i;
	
	mtz=(int**)malloc(fil*sizeof(int*));
	
	if(mtz==NULL)
	{
		printf("No hay memoria disponible\n");
		exit(0);
	}
	for(i=0;i<fil;i++)
	{
		mtz[i]=(int*)malloc(sizeof(int)*col);
	}
	
	return mtz;
}
void darDatosMtz(int**mtz, int fil, int col)
{
	int i,j;
	
	printf("Ingrese los datos de la Matriz\n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Dato[%d][%d]= ",i+1,j+1);
			scanf("%d",&mtz[i][j]);
		}
	}
}

int * crearArregloUni(int n)
{
	int*A;
	
	A = (int*)malloc(n*sizeof(int));
	
	if(A==NULL)
	{
		printf("No hay espacio en la memoria\n");
		exit(0);
	}
	return A;
}

void sMTZ(int**mtz,int fil, int col, int*f1,int*c1)
{
	int i,j,sfil,scol;
	
	sfil=0;
	scol=0;
	
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			sfil+=mtz[i][j];
		}
		f1[i]=sfil;
		sfil=0;
	}
	
	for(j=0;j<col;j++)
	{
		for(i=0;i<fil;i++)
		{
			scol+=mtz[i][j];
		}
		c1[j]=scol;
		scol=0;
	}
}

void mMtz(int**mtz,int fil, int col, int*f1, int*c1)
{
	int i,j;
	
	printf("Los datos de la Matriz son: \n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t %d",mtz[i][j]);
		}
		printf("\n");
	}
	
	printf("La suma de las filas  de su matriz es: \n");
	
	for(i=0;i<fil;i++)
	{
		printf("%d\n",f1[i]);
	}
	
	printf("La suma de las columnas de la matriz es: \n");
	
	for(j=0;j<col;j++)
	{
		printf("%d\n",c1[j]);
	}
}

void lMtz(int**mtz,int fil)
{
	int i;

	for(i=0;i<fil;i++)
	{
		free(mtz[i]);
	}
	free(mtz);
	
	printf("\nMemoria Liberada...\n");
	printf("Hasta la próximaaaaaaa \n");
}

void lV(int* f1,int* c1)
{
	free(f1);
	free(c1);
}
