#include <stdio.h>

int main()
{
	char dia;
	int id;

	printf("idade: ");
	scanf("%i", &id);

	fflush(stdin);

	printf("dia da semana (sabado ou domingo): ");
	scanf("%c", &dia);

	switch (dia)
	{
	case 's':
	case 'S':
		if (id <= 12)
		{
			printf("ingresso custa R$ 9,00");
		}
		else
		{
			printf("ingresso custa R$ 18,00");
		}
		break;
	case 'd':
	case 'D':
		if (id <= 12)
		{
			printf("ingresso custa R$ 10,00");
		}
		else
		{
			printf("ingresso custa R$ 20,00");
		}
		break;
	default:
		printf("dia da semana invalido.");
	}
}
