#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int main(int argc, char** argv)
{	

float media, s1, s2, s3;

printf("primeira nota ");
scanf("%f",&s1);
printf("segunda nota ");
scanf("%f",&s2);
printf("terceira nota ");
scanf("%f",&s3);

media = s1+ s2+ s3 /3;
printf("o resultado da media e:%f",media,"\n");

if(media < 6)

printf("reprovado \n");

	return 0;
}
