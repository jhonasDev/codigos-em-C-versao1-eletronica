#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
	float salariobase,gratificacao,imposto,salariofinal;
	
	printf("digite o valor do seu salario: ");
	scanf("%f",&salariobase);
	
		gratificacao = (salariobase*0.05)+gratificacao;
		
		imposto = (salariobase*0.07)-imposto;
		
		salariofinal = salariobase + gratificacao + imposto;
		
		printf("seu salario final e: R$ %.2f\n",salariofinal);
	
	
	
	
	
	
	
	
	return 0;
}
