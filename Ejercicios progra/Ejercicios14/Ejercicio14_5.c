#include <stdio.h>
void tri(int );
void entrada(int*);
int main(void) {
  int asteriscos;
  entrada(&asteriscos);
	
  tri(asteriscos);
}
void entrada( int *asteriscos){
printf("Numero de huevos:");
  scanf("%d", asteriscos);
  
}
void tri(int asteriscos){
    //tringulo micha
    printf("A) \n");
    int i;
    for (i = 1; i <= asteriscos; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("B) \n");
    //triangulo micha inverso
    printf("\n");
    
    for (i = asteriscos; i >= 1; i--)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //triangulo inverso
     printf("C) \n");
  int total_lineas = 10, nlinea = 1, nast = 0, nesp = 0;

    
    

    while (nlinea <= asteriscos)
    {
            while (nesp < (nlinea - 1))
            {
                printf(" ");
                nesp++;
            }

            while (nast < ((asteriscos * 2) - (nesp * 2) - 1))
            {
                printf("*");
                nast++;
            }

    nesp = 0;
    nast = 0;
    nlinea++;
    printf("\n");
    }
 
   int num, a, b, d;

   


	

	printf("\n");
	//piramide
  printf("D) \n");
	int ast=1, esp=asteriscos-1, ren=1;

	  	for( ren; ren<=asteriscos ; ren++) 
		{
		  for( i=1; i<=esp ; i++) 
		  
			printf(" ");

		  for( i=1; i<=ast ; i++) 
		  
        	printf("*");
			printf("\n");
			ast= ast+2; 
			esp= esp-1; 
		
		
		}


}



