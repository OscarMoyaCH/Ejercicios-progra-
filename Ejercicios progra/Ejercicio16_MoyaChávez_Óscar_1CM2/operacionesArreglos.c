#include<stdio.h>

void darNumElem(int*n);
void insertarDatos(int*x, int n);
void mostrar(int*x, int n);
void pideNumBuscar(int*num);
void busquedaLineal(int*x, int n, int num);
void ordenarBurbuja(int*x, int n);
void mostrar2(int*x, int n);
void pideNumBuscar2(int*num2);
int busquedaBinaria(int*x, int n, int num2);
void mostrar3(int p);
#define MAX 50

void main(){
	int x[MAX];
	int n, num, num2, p;
darNumElem(&n);
insertarDatos(x,n);
mostrar(x, n);
pideNumBuscar(&num);
busquedaLineal(x, n, num);
ordenarBurbuja(x, n);
mostrar2(x, n);
pideNumBuscar2(&num2);
p=busquedaBinaria(x, n, num2);
mostrar3(p);
}
void darNumElem(int*n){
	printf("Ingrese el numero de elementos\n");
	scanf("%d", n);
}
void insertarDatos(int*x, int n){
	int q;
	for(q=0;q<n;q++){
		printf("Ingresa el elemento[%d]\n", q+1);
		scanf("%d", &x[q]);
	}
}
void mostrar(int*x, int n){
	int i;
	for (i=0;i<n;i++){
		printf("%d,",x[i]);
	}
}
void pideNumBuscar(int*num){
	printf("Ingrese el numero que desea buscar \n");
	scanf("%d", num);
}
void busquedaLineal(int*x, int n, int num){
	int r;
	for (r=0;r<n;r++){
		if(num==x[r]){
			printf("El numero forma parte de la posición %d. \n", r+1);
			break;
		}
		
	}
	if (r==n){
		printf("El numero no fue encontrado\n");
	}
}
void ordenarBurbuja(int*x, int n){
 int i, s, m;
 for (s=0;s<n;s++){
 	for(i=0;i<n-1;i++){
 		if(x[i]>x[i+1]){
 			m= x[i];
 			x[i]=x[i+1];
 			x[i+1]= m;
		 }
	 }
 }	
}
void mostrar2(int*x, int n){
	int t;
	for (t=0;t<n;t++){
		printf("\n %d", x[t]);
	}printf("\n");
}
void pideNumBuscar2(int*num2){
	printf("Ingrese el numero que desea encontrar por método de busqueda binaria \n");
	scanf("%d", num2);
	
	
}
int busquedaBinaria(int*x, int n, int num2){
	int i, d, c;
	i= 0;
	d=n-1;
	while(i<=d){
		c=(i+d)/2;
		if(num2==x[c]){
			return c;
		}
		else if(num2>x[c]){
			i= c+1;
			
		}
		else{
			d= c-1;
		}
	}
	return -1;
}
void mostrar3(int p){
	if (p!=-1){
	printf("El numero es parte de la posición  %d", p);
	}else
	printf("No fue posible encontrar el numero :(");
}
