#include<stdio.h>

void menu(void);
void suma(void);
void resta(void);
void multiplicacion(void);
void division(void);

void main(){

menu();
 
}

void menu(void){
	char opc;
	printf("S:Suma \n");
	printf("R:Resta \n");
	printf("M:Multiplicacion \n");
	printf("D:Divisin \n");
	printf("Eliga una opcion \n");
	scanf("%c", &opc);
	
	switch(opc){
		case 'S': suma();
			break;
		case 'R': resta();
		    break;
		case 'M': multiplicacion();
		    break;
		case 'D': division();
		    break;
		default: printf("Error \n"); 
	}

	}
	
	void suma(){
		printf("suma \n");
	}
   void resta(){
   	printf("resta \n");
   }
   void multiplicacion(){
    printf("multiplicacion \n");
   }
   void division(){
   	printf("division \n");
   }
   
   
    

