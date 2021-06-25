//Archivos de cabecera 
#include<stdio.h>

//Prototipos de funciones 
float caldiv(float num1, float num2);
float calmul(float num1, float num2);
float calsum(float num1, float num2);
float calres(float num1, float num2);
void final(float dr,float mr,float sr, float rr);
float entradadedatos1(void);
float entradadedatos2(void);
void main() {
	float num1, num2, dr, mr, sr,rr;
	num1 = entradadedatos1();
	num2 = entradadedatos2();
	dr = caldiv(num1, num2);
	mr = calmul(num1, num2);
	sr = calsum(num1, num2);
	rr = calres(num1, num2);
    final(mr, dr , sr, rr);
}

float entradadedatos1(void){
float num1;
printf("Introduzca el primer numero\n");
scanf("%f" , &num1);
return num1;
}

float entradadedatos2(void){
float num2;
 printf("Introduzca el segundo numero\n");
scanf("%f" , &num2);
return num2;
}

float caldiv( float num1,  float num2){
float dr;
dr= num1/num2;
return dr;
}

float calmul ( float num1, float num2){
float mr;
mr= num1 * num2;
return mr;	
}

float calsum (float num1,  float num2){
float sr;
sr= num1 + num2;	
return sr;
}

float calres (float num1, float num2){
float rr;
rr= num1- num2;
return rr;
}

void final (float mr, float dr, float sr, float rr) {
	printf("La division es: %f\n", dr);
    printf("La multiplicación es: %f\n", mr );
    printf("La suma es: %f\n", sr);
    printf("La resta es: %f\n", rr);
}




