/* Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. (Poupança: 3%; Fundos de renda fixa: 4%)
Faça um programa que receba o tipo de investimento e seu valor e que calcule e mostre o
valor corrigido, de acordo com o tipo de investimento. */

#include <stdio.h>

int main()
{
	int invest;
	float val, rend, total;

	printf("1 - Poupanca\n2 - Fundos de renda fixa\n");
	printf("tipo de investimento: ");
	scanf("%i", &invest);

	printf("valor do investimento: ");
	scanf("%f", &val);

	switch (invest)
	{
	case 1:
		rend = val * 0.03;
		total = val + rend;
		printf("rendimento mensal de R$ %.2f \n", rend);
		printf("valor a ser recebido non primeiro mes: R$ %.2f", total);
		break;
	case 2:
		rend = val * 0.04;
		total = val + rend;
		printf("rendimento mensal de R$ %.2f \n", rend);
		printf("valor a ser recebido non primeiro mes: R$ %.2f", total);
		break;
	default:
		printf("tipo de investimento invalido.");
	}
}
