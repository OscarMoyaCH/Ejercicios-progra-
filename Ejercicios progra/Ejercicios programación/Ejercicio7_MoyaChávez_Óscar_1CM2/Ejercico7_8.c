#include <stdio.h>
#include <math.h>

//Prototipos de funciones
 float pendiente (float px1, float py1, float px2, float py2, float b);
 float entradaDatos1(void);
 float entradaDatos2(void);
 float entradaDatos3(void);
 float entradaDatos4(void);
 float entradaDatos5(void);
 void final (float pendienteordenada);
 
 void main(){
 	float px1, py1, px2, py2, b, pendienteordenada;
 	px1=entradaDatos1();
 	py1=entradaDatos2();
 	px2=entradaDatos3();
 	py2=entradaDatos4();
	b=entradaDatos5(); 
    pendienteordenada = pendiente (px1, py1, px2, py2, b);
    final (pendienteordenada);
 }


//Cuerpo de funciones 

float entradaDatos1(void){
float px1;
printf("Ingrese el pirmer valor de x \n");
scanf("%f", &px1);
return px1;
}

float entradaDatos2(void){
float py1;
printf("Ingrese el pirmer valor de y \n");
scanf("%f", &py1);
return py1;
}

float entradaDatos3(void){
float px2;
printf("Ingrese el segundo valor de x \n");
scanf("%f", &px2);
return px2;
}

float entradaDatos4(void){
float py2;
printf("Ingrese el segundo valor de y \n");
scanf("%f", &py2);
return py2;
}

float entradaDatos5(void){
float b68;
printf("Ingrese el valor de b \n");
scanf("%f", &b);
return b;
}

float pendiente (float px1, float py1, float px2, float py2, float b){
float pendiente;
pendiente = ((px1+px2)/(py1+py2)+b);
return pendiente;
}

void final(float pendienteordenada){
	printf("La pendiente ordenada es %f", pendienteordenada);
	
}















