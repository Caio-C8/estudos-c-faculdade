#include <stdio.h>
int main()
{
	char gen;
	int id, time;

	printf("idade: ");
	scanf("%i", &id);

	printf("tempo de contribuicao: ");
	scanf("%i", &time);

	fflush(stdin);

	printf("genero: ");
	scanf("%c", &gen);

	switch (gen)
	{
	case 'm':
	case 'M':
		if (id >= 65 && time >= 30)
		{
			printf("elegivel");
		}
		else if (id < 65 && time >= 30)
		{
			printf("nao elegivel por idade, falta(m) %i ano(s)", 65 - id);
		}
		else if (id >= 65 && time < 30)
		{
			printf("nao elegivel por tempo de contribicao, falta(m) %i ano(s)", 30 - time);
		}
		else
		{
			printf("nao elegivel, falta(m) %i ano(s) de idade e falta(m) %i ano(s) de contribuicao", 65 - id, 30 - time);
		}
		break;
	case 'f':
	case 'F':
		if (id >= 60 && time >= 25)
		{
			printf("elegivel");
		}
		else if (id < 60 && time >= 25)
		{
			printf("nao elegivel por idade, falta(m) %i ano(s)", 60 - id);
		}
		else if (id >= 60 && time < 25)
		{
			printf("nao elegivel por tempo de contribicao, falta(m) %i ano(s)", 25 - time);
		}
		else
		{
			printf("nao elegivel, falta(m) %i ano(s) de idade e falta(m) %i ano(s) de contribuicao", 60 - id, 25 - time);
		}
		break;
	default:
		printf("genero invalido.");
	}
}
