#include <stdio.h>
int main()
{
	float tapioca, mucarela, din, valF;

	printf("tapioca: R$ ");
	scanf("%f", &tapioca);

	printf("mucarela: R$ ");
	scanf("%f", &mucarela);

	printf("valor para pagar: R$ ");
	scanf("%f", &din);

	if (din < tapioca && din < mucarela)
	{
		printf("dinheiro insuficiente para os dois.");
	}
	else if (din >= tapioca + mucarela)
	{
		printf("dinheiro suficiente para os dois.");
	}
	else
	{
		printf("dinheiro suficiente para um dos dois.");
	}
}
