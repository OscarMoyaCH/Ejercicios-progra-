#include<stdio.h>
#include<math.h>

//Prototipos de funciones 
void entradaDatos1(float*, float*);
void entradaDatos2(float*, float*);
void entradaDatos3(float*, float*);
void perimetro(float*, float*, float*, float*, float*, float*, float*, float*, float*, float*);
void final(float*);
void main(){
	float ax, ay, bx, by, cx, cy, a, b, c, p;
	
	entradaDatos1(&ax, &ay);
	entradaDatos2(&bx, &by);
	entradaDatos3(&cx, &cy);
	perimetro(&ax, &ay, &bx, &by, &cx, &cy, &a, &b, &c, &p);
	final(&p);
}

void entradaDatos1(float* ax, float* ay){
	printf("Introduzca el valor de ax \n");
	scanf("%f", ax);
	printf("Introduzca el valor de ay \n");
	scanf("%f", ay);
}

void entradaDatos2(float* bx, float* by){
	printf("Introduzca el valor de bx \n");
    scanf("%f", bx);
	printf("Introduzca el valor de by \n");
	scanf("%f", by);
}

void entradaDatos3(float* cx, float* cy){
	printf("Introduzca el valor de cx \n");
	scanf("%f", cx);
	printf("Introduzca el valor de cy \n");
	scanf("%f", cy);
}

void perimetro(float* ax, float* ay, float* bx, float* by, float* cx, float* cy, float* a, float* b, float* c, float*p){
    *a= (sqrt(pow(*bx-*ax,2)+pow(*by-*ay,2)));
	*b= (sqrt(pow(*cx-*bx,2)+pow(*cy-*by,2)));
	*c= (sqrt(pow(*cx-*ax,2)+pow(*cy-*ay,2)));
    *p= (*a+*b+*c);
}

void final(float* p){
	printf("El perimetro es %f \n", *p);
}







