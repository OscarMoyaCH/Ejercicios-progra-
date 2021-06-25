  #include <stdio.h>

void entradaDatos1(int *trabajadores);
void solicitud(int trabajadores, float ventaprimera, float sueldob);
void comision(float k, float s);

int main()
{
	int trabajadores;
	float ventaprimera,sueldob;
	
	entradaDatos1(&trabajadores);
	solicitud(trabajadores,ventaprimera,sueldob);
  return 0;
}

void entradaDatos1(int*trabajadores)
{
	printf("Introduzca el numero de trabajadores: ");
	scanf("%d", trabajadores);
}

void solicitud(int trabajadores, float ventaprimera, float sueldob)
{
	float s, k, venta;
	int x=0;
	
	for(trabajadores; trabajadores!=0; trabajadores--)
	{
		venta = 0;
		s = 0;
		
		printf("\nIntroduzca el suedo base: ");
		scanf("%f", &sueldob);
		
		for(x=3;x!=0;x--)
		{
			printf("Introduzca una venta: ");
			scanf("%f", &ventaprimera);
			venta+=ventaprimera;
			k = venta*.10;
		s = sueldob+k;
		
		comision(k,s);
		}
		
		
	}
}

void comision(float k, float s){
	printf("\n La comision es de: %f y el sueldo final: %f",k, s);
}
  
  
  
  

