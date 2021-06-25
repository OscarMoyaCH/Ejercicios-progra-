#include<stdio.h>
void entradaDatos(int*);
void paroimpar(int, float*, float*);
void par1(float, int, float);

void main(){
	float par, impar;
	int num;
	entradaDatos(&num);
   paroimpar(num, &par, &impar);
   par1(par, num, impar);
   
}

void entradaDatos(int* num){
printf("Introduzca el numero entero con el que desee que la serie empiece \n");
scanf("%d", num);
}

void paroimpar(int num, float* par, float *impar){
	if(num%2==0){
		*par=num;
	}
	else{
		*impar=num;
	}
}

void par1 (float par, int num, float  impar){
	if(num==par)
	{
		while(num!=1)
		{
			if(num%2==0){
				num/=2;
			}
			else{
				num=(num*3)+1;
			}
			
			printf("%d,", num);
		}
	}
	if(num==impar)
	{
		while(num!=1)
		{
			if(num%2==0){
				num/=2;
			}
			else{
				num=(num*3)+1;
			}
			
			printf("%d,", num);
		}
	}
}



