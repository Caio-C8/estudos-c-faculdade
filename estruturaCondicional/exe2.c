/* Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O valor do aumento encontra-se na tabela a seguir:
(Até R$ 300,00: R$ 50,00 de aumento; Acima de R$ 300,00: R$ 70,00 de aumento) */

#include <stdio.h>

int main()
{
	float salario, aumento;

	printf("valor do salario: R$ ");
	scanf("%f", &salario);

	if (salario <= 300)
	{
		aumento = salario + 50;
		printf("aumento de R$ 50.00\nO novo salario sera R$ %.2f", aumento);
	}
	else
	{
		aumento = salario + 70;
		printf("aumento de R$ 70.00\nO novo salario sera R$ %.2f", aumento);
	}
}
