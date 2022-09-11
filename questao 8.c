#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int main(int argc, char** argv)
{	

int n1, n2, soma, subtracao,subtracao2, produto,divisao, quociente, resto;

printf("digite primeiro numero ");
scanf("%d",&n1);
printf("digite segundo numero ");
scanf("%d",&n2);

soma = n1 + n2;
printf("o resultado da soma e:%d\n",soma);

subtracao = n1 - n2;
printf("o resultado da subtracao e:%d\n",subtracao);

subtracao2 = n2 - n1;
printf("o resultado da subtracao2 e:%d\n",subtracao2);

produto = n1*n2;
printf("o resultado da produto e:%d\n",produto);

divisao = n1/n2;
printf("o resultado da divisao e:%d\n",divisao);

quociente = n1/n2;
printf("o resultado da quociente e:%d\n",quociente);

resto = n1%n2;
printf("o resultado da resto e:%d\n",resto);

	return 0;
}
