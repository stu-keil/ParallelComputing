//Ctrl + K -cut CTRL + U Paste
//Alt + 6 Copy - Ctrl + U Paste
//Alt A - select multiple lines
#include <stdio.h>
#include <math.h>
#define valor 5
#define _USE_MATH_DEFINES
int main(void){
char caracter;
int num;
int var1;
caracter = 'a';
//comentario
num = 10;
printf("caracter: %c\n",caracter);
printf("numero: %d\n",num);
printf("COmbina: %d\n",num+caracter);
printf("Valor de caracter %d\n",caracter);
printf("%d %c\n",valor,valor);
printf("%c\n",valor);

printf("Pi: %1.14f\n",M_PI);
printf("E: %1.14f\n",M_E);
 //Si no hemos inicializado una variable entonces tiene un valor aleatorio
printf("Variable no inicializada %d\n",var1);

return 23;
}
