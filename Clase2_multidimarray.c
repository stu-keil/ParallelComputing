#include<stdio.h>

int valor = 10;

int main(void){
	int array[2][3];
	int ren,col,i,j;
	array[0][0] = -2;
	array[1][1] = 10;
	ren = sizeof(array)/sizeof(array[0]);
	col = sizeof(array[0])/sizeof(array[0][0]);
	printf("Arreglo multidimensional con ren = %d col = %d\n",ren,col);
	for(i = 0; i<ren; i++){
		for(j = 0; j<col; j++){
			printf("Elemento ren = %d col = %d: %d\n",i,j,array[i][j]);
		}
	}
	return 0;
}

