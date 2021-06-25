
#include<stdio.h>

void entradaDatos(int*);
void calculo(int*, int*, int*, int*, int*, int*, int*, int*, int*);


void main(){
	int calif, r, a, z, rs, as, prom, proma, promr;
	r=0;
	a=0;
	z=0;
	entradaDatos(&calif);
	calculo(&calif, &r, &a, &z, &rs, &as, &prom, &proma, &promr);
}


void entradaDatos(int* calif){
	printf("Ingrese el numero de calificacioes \n");
	scanf("%d", calif);
}

void calculo(int* calif, int* r, int* a, int* rs, int* as, int*z, int* prom, int* proma, int* promr){
	int b = 1;
	printf("A continuacion escribe las calificaciones \n");
	   do{
	      int xd;
	      scanf("%d", &xd);
	            switch (b){
	            	case 1 :
	            		if (xd<6){
	            		*r +=1;
					    *rs = (*rs + xd);
						}
						   else{
						        *a +=1;
						        *as = (*as + xd);	
						}
					break;
					}
					z++;
		}
				while (*z<=*calif);
				
				
				    *prom=((*as+*rs)/(*calif));
				    *proma=(*as/(*a));
				    *promr=(*rs/(*r));
			 	     printf("Las materias reprobadas son %d\nLas materias aprobadas son %d\nEl promedio es %d \nEl promedio de las notas aprobadas es %d\nEl promedio de la notas reprobadas es %d\n",*r,*a,*prom,*proma,*promr);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

