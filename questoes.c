#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int main(int argc, char** argv)
{
	
int soma, nr1, nr2;

printf("digita o primeiro valor ");
scanf("%d",&nr1);
printf("digite o segundo valor ");
scanf("%d",&nr2);
soma=nr1 +nr2;
printf("o resultado da soma e:%d%s",soma,"\n");
system("pause");


	return 0;
}
