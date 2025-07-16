/*Faça um programa que receba o ano de nascimento de uma pessoa e a ano atual, calcule e mostre quantos anos ela tera em 2050.
entrada: receber o ano de nascimento de uma pessoa;
processamento: calcular a idade da pessoa e quantos anos ela tera em 2050;
saida: mostrar a idade da pessoa e quantos anos ela tera em 2050; */

#include <stdio.h>
main()
{
	int anoNas;
	int idade;

	// entrada
	printf("Digite seu ano de nascimento: ");
	scanf("%i", &anoNas);

	// processamento
	idade = 2050 - anoNas;

	// saida
	printf("Voce tera %i anos em 2050", idade);
}
