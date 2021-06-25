//Archivos de cabecera 
#include<stdio.h>

//Prototipos de funciones 
void caldiv(float*, float*, float*);
void calmul(float*, float*, float*);
void calsum(float*, float*, float*);
void calres(float*, float*, float*);
void final(float* dr,float* mr,float* sr, float* rr);
void entradadedatos1(float*);
void entradadedatos2(float*);
void main() {
	float num1, num2, dr, mr, sr,rr;
	 entradadedatos1(&num1);
	 entradadedatos2(&num2);
     caldiv(&num1, &num2, &dr);
     calmul(&num1, &num2, &mr);
	 calsum(&num1, &num2, &sr);
	 calres(&num1, &num2, &rr);
    final(&mr, &dr , &sr, &rr);
}

void entradadedatos1(float* num1){
printf("Introduzca el primer numero\n");
scanf("%f", *&num1);
}

void entradadedatos2(float* num2){
 printf("Introduzca el segundo numero\n");
scanf("%f" , *&num2);
}

void caldiv( float* num1,  float* num2, float* dr){
*dr= (*num1)/(*num2);
}

void calmul ( float* num1, float* num2, float* mr){
*mr= (*num1)*(*num2);
}


void calsum (float* num1,  float* num2, float*sr){
*sr= (*num1)+(*num2);	
}

void calres (float* num1, float* num2, float* rr){
*rr= (*num1)-(*num2);
}

void final (float* mr, float* dr, float* sr, float* rr) {
	printf("La division es: %f\n", *dr);
    printf("La multiplicación es: %f\n", *mr );
    printf("La suma es: %f\n", *sr);
    printf("La resta es: %f\n", *rr);
}

