#include<stdio.h>
#include<math.h>

 void entradaDatos(int*);
 void serie(int);


void main(){
	int n;
	entradaDatos(&n);
	serie(n);
}


void entradaDatos(int* n){
	printf("Introduzca el valor de n \n");
	scanf("%d", n);
}

void serie(int n){
	float b, k, c, d;
	k=1;
	double j;
	j=0;
	if(n>0){
		do{
			b=k+1;
			c= pow(-1,b);
			d=(c/k);
			j+=d;
			k++;
		}
		while (k<=n);
		printf("El resultado final es: %f", j);

	}

}
