/*Faça um programa que receba o ano de nascimento de uma pessoa e a ano atual, calcule e mostre a idade da pessoa.
entrada: receber o ano de nascimento de uma pessoa e a ano atual;
processamento: calcular a idade da pessoa e quantos anos ela tera em 2050;
saida: mostrar a idade da pessoa e quantos anos ela tera em 2050; */

#include <stdio.h>

main()
{
	int anoNas;
	int anoAt;
	int idade;

	// entrada
	printf("Digite seu ano de nascimento: ");
	scanf("%i", &anoNas);

	printf("Digite o ano atual: ");
	scanf("%i", &anoAt);

	// processamento
	idade = anoAt - anoNas;

	// saida
	printf("Voce tem ou fara %i anos", idade);
}
