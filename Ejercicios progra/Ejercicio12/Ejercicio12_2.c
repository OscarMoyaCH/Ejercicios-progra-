#include<stdio.h>

void prcs(int *nv, int *m2, int *m6, int *mm);
void dae(int *nv);

void main(){
	int nv, m2, m6, mm;
	m2 = 0;
	m6 = 0;
	mm = 0;
	dae(&nv);
	prcs(&nv, &m2, &m6, &mm);
}

void dae(int *nv){
	printf("introduzca cuantos precios se van a evaluar: \n");
	scanf("%d", *&nv);
}
void prcs(int *nv, int *m2, int *m6, int *mm){
	int i = 1;
	int a = 1;
		do{
			int xd;
			printf("indtroduce el precio de los articulos vendidos: \n");
			scanf("%d", &xd);
			
				switch (a){
				case 1 :
					if (xd <= 200){
					*m2 +=1;
					}
					else if(xd>200 && xd<600){
					*m6 +=1;
					}
					else if(xd >= 600){
					*mm += 1;
					}
					break;
				}
					
					i++;
			}
		
		while( i <= *nv);
		
		printf("Las ventas menores o iguales a 200 fueron: %d \nLas ventas mayores de 200 y menores que 600 fueron: %d \nLas ventas mayores que 600 fueron: %d \n", *m2, *m6, *mm);
}

