#include <stdio.h>

int main()
{
	char def;
	int id;

	printf("idade: ");
	scanf("%i", &id);

	fflush(stdin);

	printf("tem deficiencia (sim ou nao): ");
	scanf("%c", &def);

	switch (def)
	{
	case 's':
	case 'S':
		if (id <= 65)
		{
			printf("tem ate 65 anos com deficiencia, fila 1");
		}
		else
		{
			printf("tem mais de 65 anos com deficiencia, fila 4");
		}
		break;
	case 'n':
	case 'N':
		if (id <= 65)
		{
			printf("tem ate 65 anos sem deficiencia, fila 2");
		}
		else
		{
			printf("tem mais de 65 anos sem deficiencia, fila 3");
		}
		break;
	default:
		printf("informacao sobre deficiencia invalida.");
	}
}
