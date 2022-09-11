#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int main(int argc, char** argv)
{	

int idade, idadefut;
char nome [40];

printf("digite seu nome \n");
scanf("%s",&nome);


printf("digite sua idade: \n");
scanf("%d",&idade);


idadefut = idade + 30;

printf("%s\n",nome);
printf("sua idade sera = %d\n",idadefut);
system("pause");


	return 0;
}
