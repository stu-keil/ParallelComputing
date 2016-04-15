#include<stdio.h>


int main(void){
	
	int a =1,b=2,c=3,*p,*q;
	p=&a;
	q=&b;
	c=*p;
	p=q;
	*p=13;
	
	printf("a:%d | b:%d | c:%d\n",a,b,c);

	

	return 0;
}

