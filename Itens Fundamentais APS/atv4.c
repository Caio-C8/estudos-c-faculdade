/* Faça um programa que receba o custo de um espetáculo teatral e o preço do
convite desse espetáculo. Esse programa deverá calcular e mostrar a quantidade
de convites que devem ser vendidos para que pelo menos o custo do espetáculo seja alcançado.*/

#include <stdio.h>

main()
{
	float custoEsp;
	float valConv;
	int nConvVend;

	// entrada
	printf("Digite o custo para que o espetaculo seja feito: R$ ");
	scanf("%f", &custoEsp);

	printf("Digite o valor do convite: R$ ");
	scanf("%f", &valConv);

	// processamento
	nConvVend = custoEsp / valConv;

	// saida
	printf("Devem ser vendidos %i convites para que o espetaculo seja pago", nConvVend);
}
