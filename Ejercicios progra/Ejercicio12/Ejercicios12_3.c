#include<stdio.h>

void prcs(int *nv, int *m, int *p, int *pt, int *n);
void dae(int *nv);

void main(){
	int nv, m, p, pt, n;
	m = 0;
	p = 0;
	pt = 0;
	n = 0;
	dae(&nv);
	prcs(&nv, &m, &p, &pt, &n);
}

void dae(int *nv){
	printf("introduzca el numero de datos a evaluar: \n");
	scanf("%d", *&nv);
}
void prcs(int *nv, int *m, int *p, int *pt, int *n){
	int i = 1;
	int a = 1;
	float ip, ipt;
	printf("A continuacion introduce los valores a evaluar \n");
		do{
			int xd;
			scanf("%d", &xd);
			
				switch (a){
				case 1 :
					if (xd > 0){
					*m +=1;
					*p = (*p + xd);
					}
					else{
						*n ++;
					}
					break;
				}
				*pt = (*pt + xd);
					
					i++;
			}
		
		while( i <= *nv);
		
		ip = (*p / *m);
		ipt = (*pt / *nv);
		
		printf("Hay %d numeros positivos \nEl promedio de los numeros positivos es %.2f \nEl promedio de todos los numeros introducidos es: %.2f \n ", *m, ip, ipt);
}

	
	
	
	
	
	
	
	
	
	

