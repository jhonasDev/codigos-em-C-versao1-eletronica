#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int main(int argc, char** argv)
{	

int n1, n2, n3, mediaponderada;

n1 = n1*2; //peso
n2 = n2*3;
n3 = n2*2;


printf("digite primeiro nota ");
scanf("%d",&n1);
printf("digite segundo nota ");
scanf("%d",&n2);
printf("digite terceiro nota ");
scanf("%d",&n3);

mediaponderada = n1+n2+n3/2+3+2; //soma dos pesos

printf("a media ponderada da nota e = %d ",mediaponderada);

	return 0;
}
