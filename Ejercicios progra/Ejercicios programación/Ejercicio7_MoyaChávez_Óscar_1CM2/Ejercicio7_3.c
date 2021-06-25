//Archivos de cabecera 
#include<stdio.h>
#include<math.h>


//Protoytipos de funciones 

float calarea(float lad1, float lad2, float lad3);
float entradadedatos(void);
void final (float area);

void main () {

float lad1, lad2, lad3, area;

lad1= entradadedatos();
lad2= entradadedatos();
lad3= entradadedatos();
area= calarea(lad1, lad2, lad3);
final (area);
}


//Cuerpo de funciones 

float entradadedatos(void){
	float lad;
	printf("Introduzca un numero\n");
	scanf("%f", &lad);
	return lad;
	
}

float calarea(float lad1, float lad2, float lad3){
	float perres, ar, z;
	perres = (lad1+ lad2 + lad3)/2;
	z = (perres*(perres-lad1)*(perres-lad2)*(perres-lad3));
    ar = sqrt (z);
	return ar;

}

void final( float area){
   printf("El area es %f", area);
 	
} 


