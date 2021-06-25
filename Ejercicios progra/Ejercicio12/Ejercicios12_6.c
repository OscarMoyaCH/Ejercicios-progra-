#include<stdio.h>
void entradaDatos(int*);
void placas(int*, int*, int*, int*, int*, int*);
void mostrar(int*, int*, int*, int*, int*);


void main(){
	int autos, amarillo, rosa, roja, verde, azul;
amarillo = 0;
rosa = 0;
roja = 0;
verde = 0;
azul = 0;
entradaDatos(&autos);
placas(&autos, &amarillo, &rosa, &roja, &verde, &azul);
mostrar(&amarillo, &rosa, &roja, &verde, &azul);
}
 	
 	void entradaDatos(int* autos){
	printf("Introduzca el numero de autos \n");
 	scanf("%d", autos);
 }
 
 	
 	void placas(int* autos, int* amarillo, int* rosa, int* roja, int* verde, int* azul){
 		int i = 1;
 		int a = 1;
 		do{
 			int xd;
		 printf("Introduzca el numero final de la placa del auto \n");
 		scanf("%d", &xd);
 		
 		switch(a){
 			case 1:
 				if (xd==1 || xd==2){
 					*amarillo += 1;
				 }
				 else if (xd==3 || xd==4){
				 	*rosa += 1;
				  }
				    else if (xd==5 || xd==6){
				    	*roja += 1;
					} 
					  else if (xd==7 || xd==8){
					  	  *verde += 1;
					  }
					    else if (xd==9 || xd==0){
					    	*azul += 1;
						}
						break;
		 }
 		       i++;
		 
		 }
	while(i<= *autos);	 
 		
}
 	
void mostrar(int* amarillo, int* rosa, int* roja, int* verde, int* azul){
	printf("Los autos con amarillas son: %d \nLos autos con rosa son: %d \nLos autos con roja son: %d \nLos autos con verde son: %d \nLos autos con azul son: %d \n", *amarillo, *rosa, *roja, *verde, *azul);
	
	
} 	
 	
 	
 	
 	
 	
