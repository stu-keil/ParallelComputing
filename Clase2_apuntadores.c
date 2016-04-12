#include<stdio.h>


int main(void){
	
	int *p;
	int c = 10;
	p = &c;
	*p = 40;
	
	printf("%d \n",c);
	printf("%d \n",*p);
	printf("%p \n",p);
	printf("%p \n",&c);

	return 0;
}

