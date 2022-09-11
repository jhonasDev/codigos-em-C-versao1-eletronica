#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{

float salario,aumento,novosalario;
	
	printf("digite seu salario: ");
	scanf("%f",&salario);
	
	aumento = salario*0.40;
	novosalario = salario+ (salario*0.40);
	
	printf("seu salario aumentou : R$ %.2f\n",aumento);
	printf("seu novo salario e : R$ %.2f\n",novosalario);
	
	
	
	
	
	
	
	
	


return 0;
}
