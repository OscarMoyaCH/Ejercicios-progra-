#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int longitud(char*);
int vocal(char*) ;
int mayusculas(char*);
int pali(char*);
int entrada();
void cadena(char*);
void invertido(char*) ;
void Menu(char*);

# define max 50
int main(){
	char c [max];
	Menu(c );
}
int entrada(){
	int x;
	printf("Seleccione la opción deseada\n");
	printf(" 1.- Introducir una nueva cadena \n 2.-Intercambia \n 3.- Vocales \n 4.- Mayúsculas\n 5.-Palíndromo \n 6.-Longitud \n 7.-Salir\n");
	scanf("%d",&x);
	return x;
}

void Menu(char* c){
	int q;
	do{
		q=entrada();
		getchar();
		if(q==1) cadena(c);
		else if(q==2) invertido(c);
		else if(q==3) printf("El numero de vocales es: %d\n",vocal(c));
		else if(q==4) printf("El numero de mayusculas es: %d\n",mayuscula(c));
		else if(q==5){
			if(pali(c)==1) printf("Es un polindromo\n");
			else printf("No es un polindromo\n");
		}
		else if(q==6) printf("Longitud: %d\n",longitud(c));
	}while(q<=6);
}


void cadena(char* c){
	printf("Introduce la cadena\n");
	scanf("%[^\n]",c);
	getchar();
}
int longitud(char* c){
	return strlen(c);
}

void cambio(char* a,char* b){
	char t=*a;
	*a=*b;
	*b=t;
}

void invertido(char* c){
	int q=longitud(c),i=0,j=q-1;
	while(j!=i){
		if(j==i || j-1==i) break;
		cambio(&c[i],&c[j]);
		i++;
		j--;
	}
	if(q%2==0) cambio(&c[q/2-1],&c[q/2]);
	printf("Invertido: %s\n",c);
}
int vocal(char* c){
	int q=longitud(c),i,d=0,xd=0;
	for(i=0;i<q;i++){ char a=tolower(c[i]); if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u') d++;}
	return d;
}

int pali(char* c){
	char Ar2[longitud(c)+2];
	strcpy(Ar2,c);
	invertido(Ar2);
	int r=strcmp(c,Ar2);
	if(r==0) return 1;
	return 0;
}

int mayuscula(char* c){
	int q=longitud(c),i, d=0;
	for(i=0;i<q;i++) if(toupper(c[i])==c[i]) d++;
	return d;
}






