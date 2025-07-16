/*Faça um programa que receba um número positivo e maior que zero, calcule e mostre
o número digitado ao quadrado e o número digitado ao cubo.
entrada: receber um número positivo e maior que zero;
processamento: calcular o número digitado ao quadrado e o número digitado ao cubo;
saida: mostrar o número digitado ao quadrado e o número digitado ao cubo; */

#include <stdio.h>

main()
{
	float x;
	float xquadrado;
	float xcubo;

	// entrada
	printf("Digite um numero positivo maior que zero: ");
	scanf("%f", &x);

	// processamento
	xquadrado = x * x;
	xcubo = x * x * x;

	// saida
	printf("O numero elevado ao quadrado sera: %f", xquadrado);
	printf("\nO numero elevado ao cubo sera: %f", xcubo);
}
