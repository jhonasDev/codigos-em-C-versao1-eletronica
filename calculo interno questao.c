#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int main(int argc, char** argv)
{	

int nr1, nr2,calculado;


nr1 = 2;
nr2 = 4;

//calculado=nr1+(nr2*4);

calculado=nr1+(nr2*4/2);
printf("o resultado da divisão e: %d\n   ",calculado);
system("pause");


	return 0;
}
