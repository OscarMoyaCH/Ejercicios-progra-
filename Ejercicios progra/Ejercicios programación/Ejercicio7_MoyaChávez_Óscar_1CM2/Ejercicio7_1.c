#include <stdio.h>
#include <math.h>

float calccuadruple (float num);
void final (float num);
float entradadatos();
//función principal 
void main(){
float num, calcuadruple;
num = entradadatos();
calcuadruple = calccuadruple ( num);
final  (calcuadruple);
}

//cuero de funciones 
float entradadatos(){
	float num;
	printf("Escriba el numero que desea saber su cuadruple\n");
	scanf("%f", & num);
	return num;
}

float calccuadruple( float num){
    float calccuadruple;
	calccuadruple = pow(num,4);
	return calccuadruple;
}

 void final (float calcuadruple){
 printf("El cudruple es %f", calcuadruple);
 }
 

