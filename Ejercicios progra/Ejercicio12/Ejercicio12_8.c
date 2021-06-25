#include<stdio.h>
#include<stdlib.h>
void instrucciones();
void suma(char*, int*, int*, int*, int*);


void main(){
	char sino;
	int  i, num, p, x;
	instrucciones();
	suma(&sino, &i, &num, &p, &x);
	i=0;
	p=0;
	x=0;
}

void instrucciones(){
printf("Ingrese el numero que desea sumar \n");
}

 void suma(char* sino, int* i, int* num, int* p, int* x){
	
do{
 	
	 printf("¿Desea introducir un dato? Escriba s o n donde s es Si y s es No \n");
 		scanf("%c", sino);
 		
 		switch( *sino ){
 			case 's':
 				      *i+=1;
 				       printf("Ingrese el numero que desea sumar \n");
 				       scanf("%d", num);
 				       *p+=*num;
 				        *x+=1;
 				break;
			case 'n': 
			           printf("La suma de los numeros introducidos es %d \n", *p);	 
			           exit(0);
}
				
		 }
while(*x != *i);	  
}






