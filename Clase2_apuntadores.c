#include<stdio.h>


int main(void){
	
	int *p,*p2;//al declarar apuntadores no es necesario alojar el espacio para el pointee
	int c = 10;
	p = &c;
	*p = 40;

	int array[10];
	printf("direccion de arreglo: %p\n",array);
	printf("direccion de arreglo: %p\n",&array[0]);
	printf("direccion de arreglo: %p\n",&array[1]);
	printf("direccion de arreglo: %p\n",&array[9]);
	p2 = array;
	printf("direccion de arreglo: %p\n",p2);

	array[0] = -10;
	array[3] = 10;

	printf("Posicion 0 con apuntador %d\n",*p2);
	printf("Posicion 3 con apuntador %d\n",*(p2+3));
	

	printf("%d \n",c);
	printf("%d \n",*p);
	printf("%p \n",p);
	printf("%p \n",&c);

	int *p3 = NULL;
	printf("Apuntador Nulo %p\n",p3);
	
	int *pointer[4];//Es un arreglo de direcciones de memoria
	int (*pointer)[4];//Es un arreglo de 4 enteros
	int **variable;//es un apuntador a un apuntador


	return 0;
}

