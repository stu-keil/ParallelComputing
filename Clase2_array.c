#include<stdio.h>



int valor = 10;



int main(void){

	int array[10];
	int len,i;
	array[0] = -2;
	array[9] = 10;
	len = sizeof(array)/sizeof(array[0]);
	for(i = 0; i<len; i++){
		printf("Elemento %d: %d\n",i,array[i]);
	}





	return 0;
}

