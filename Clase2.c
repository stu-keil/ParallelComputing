#include<stdio.h>
#define NUMERO 10
#define max(A,B) ((A) > (B) ? (A) : (B))//Macros

int valor = 10;

void funcion(void);//Prototipo de la función, le aviso al compilador que va a existir esta funcion sin el codigo per se

int main(void){

	int x;
	x = max(5,4);
	printf("Numero: %d\n", NUMERO);
	printf("Valor de x: %d\n", x);
	funcion();
	return 0;
}

void funcion(void){
	extern int valor;
	printf("valor: %d\n",valor);
}
