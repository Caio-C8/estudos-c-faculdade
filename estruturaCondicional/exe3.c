/* Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha do usuário.
1 - Média entre os numeros digitados; 2 - Soma entre os números digitados; 3 - Produto entre os números digitados.
Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa. */

#include <stdio.h>

int main()
{
	int op;
	float num1, num2;

	printf("\tOperacoes\n");

	printf("1 - Media entre os numeros\n2 - Soma dos numeros\n3 - Produto entre os numeros\n");
	printf("operacao que sera realizada: ");
	scanf("%i", &op);

	printf("numero 1: ");
	scanf("%f", &num1);

	printf("numero 2: ");
	scanf("%f", &num2);

	switch (op)
	{
	case 1:
		printf("resultado da media entre os numeros: %.2f", (num1 + num2) / 2);
		break;
	case 2:
		printf("resultado da soma entre os numeros: %.2f", num1 + num2);
		break;
	case 3:
		printf("resultado da multiplicacao entre os numeros: %.2f", num1 * num2);
		break;
	default:
		printf("tipo da operacao invalida.");
	}
}
