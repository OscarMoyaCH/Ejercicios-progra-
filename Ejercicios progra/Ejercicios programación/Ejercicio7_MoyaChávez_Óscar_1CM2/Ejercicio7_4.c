#include<stdio.h>
#include<math.h>

//Protortipos de funciones 
float funcion(float equis);
float entradaDatos(void);
void final(  float rfuncion);

//Función principal 
void main(){
	float equis, rfuncion;
	equis = entradaDatos();
	rfuncion = funcion (equis);
	final (rfuncion);
}

//Cuerpo de funciones

 float entradaDatos(void){
 	float equis;
 	printf("Indtroduzca el valor de x \n");
 	scanf("%f", &equis );
 }
 
 float funcion( float equis){
 	float equissiete,equissietediv, equissiera, equistres, equis4; 
 	equissiete = pow(equis,7);
 	equissietediv = ((equissiete)/7);
 	equissiera = (sqrt(3)+ (equissietediv));
 	equistres = (pow(equis,7)*(equissiera));
 	equis4 = pow(equistres,4);
 return equis4;
 }
 
void final( float rfuncion){
	printf("El resultado es %f", rfuncion);

}
