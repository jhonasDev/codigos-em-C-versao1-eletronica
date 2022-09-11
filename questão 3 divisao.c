#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int main(int argc, char** argv)
{	

float divisao, nr1, nr2;

printf("digita o primeiro valor ");
scanf("%f",&nr1);
printf("digite o segundo valor ");
scanf("%f",&nr2);
divisao=nr1/nr2;
printf("o resultado da divisão e:%f",divisao,"\n");
system("pause");


	return 0;
}
