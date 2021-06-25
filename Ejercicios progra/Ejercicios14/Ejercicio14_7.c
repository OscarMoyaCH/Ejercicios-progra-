#include <stdio.h>
//prototipos de funciones
void datosentrada(int*al);
void extra(int*al, int*uni);
//funcion principal
void main(){
	int al, uni;
	datosentrada(&al);
	extra(&al,&uni);
}
void datosentrada(int*al){
	printf("ingrese el numero de alumnos\n");
	scanf("%d", al);
}
void extra(int*al, int*uni){
	int cont=1, cont2=1, ap=0, rep=0;
	float sumcal, cal, prom;
	for(*al,cont, ap, rep,*uni;cont<=*al;cont++){
		printf("Introduzca la unidades del alumno %d\n",cont);
		scanf("%d", uni);
		for (*uni,sumcal=0,cont2=1;cont2<=*uni;cont2++){
			printf("introduzca la calificacion de la unidad \n");
		scanf("%f", &cal);
		sumcal+=cal;
		}
		prom= sumcal/ *uni;
		if(prom>=6){
			ap++;
		}
		else{
			rep++;
		}
	}
	printf("el numero de cabrones aprobados es %d \n", ap);
	printf(" el numero de cabrones reporbados es %d \n", rep);
}
