/* Dada uma String retorna a quantidade de letras “A” ou “a” */

#include <stdio.h>
#include <string.h>

int main()
{
	char string[50];
	int cont_a = 0, cont_A = 0;

	printf("digite uma palavra ou frase: ");
	gets(string);

	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] == 'a')
		{
			cont_a++;
		}
		if (string[i] == 'A')
		{
			cont_A++;
		}
	}
	printf("a palavra ou frase tem %i 'a' e %i 'A'.", cont_a, cont_A);
}
