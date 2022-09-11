#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int main(int argc, char** argv)
{	

float salario, novosalario;


printf("digite seu salario: ");
scanf("%f",&salario);


novosalario = (salario*0.25)+salario;


printf("seu novo salario e: R$ %.2f\n",novosalario);

	return 0;
}
