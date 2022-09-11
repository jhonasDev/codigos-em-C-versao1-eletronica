#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
	float salariobase,gratificacao,imposto,salarioreceber;
	
	salariobase = 0.10;
	
	printf("seu salario base e: ");
	scanf("%f",&salariobase);
	
	gratificacao = 1000;
	salarioreceber = gratificacao + (salariobase*salarioreceber);
	
	printf("seu salario final e: R$ %.2f\n",salarioreceber);
	
	
	
	
	
	
	
	
	return 0;
}
