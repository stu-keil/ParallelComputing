#include <stdio.h>

int main(void){

int variable1, variable2;

 variable1 = -349;
if(variable1<=10)printf("Hey!\n");
if(variable1<=10){
	printf("Hey!\n");
	printf("Hola!\n");
}
if(variable1<=10){
	printf("Hey!\n");
	printf("Hola!\n");
}
else{
	printf("Mayor que 10\n");
}
/*Otra	
  forma	
  de	
  if..else:*/
variable2=(variable1<1)?variable1:0;
printf("variable2:%d\n",variable2);
return 0;
}
