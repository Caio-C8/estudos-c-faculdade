/* O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e
dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual
de lucro do distribuidor e o percentual de impostos, calcule e mostre o valor correspondente ao lucro do distribuidor e
o valor correspondente aos impostos; */

#include <stdio.h>

main()
{
	float valCarro;
	float perLucro;
	float perImp;
	float valLucro;
	float valImp;
	float valFinCarro;

	// entrada
	printf("Digite o valor do carro: R$ ");
	scanf("%f", &valCarro);

	printf("Digite o percentual do lucro do distribuidor: ");
	scanf("%f", &perLucro);

	printf("Digite o percentual de impostos: ");
	scanf("%f", &perImp);

	// processamento
	valLucro = valCarro * (perLucro / 100);
	valImp = valCarro * (perImp / 100);
	valFinCarro = valCarro + valLucro + valImp;

	// saida
	printf("O valor do lucro do distribuidor e: R$ %.2f", valLucro);
	printf("\nO valor dos impostos e: R$ %.2f", valImp);
	printf("\nO valor total do carro e: R$ %.2f", valFinCarro);
}
