#include <stdio.h>

struct fraccion{
	int numerador;
	char letra;
};

void imprime(struct fraccion f){
	printf("El numerador es %d y su caracter es %c",f.numerador,f.letra);
}
int main(void){

struct fraccion f;
f.numerador = -5;
f.letra = 'a';
imprime(f);

return 0;
}
