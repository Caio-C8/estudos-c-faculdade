#include <stdio.h>
#include <stdlib.h> //foi usado para mudar a cor durante a execução do código no terminal (linha 10) e para usar os comandos do power shell do windows (linha 135).
#include <ctype.h>	//foi usado para saber se o caracter (char) recebido é um número, caracter ou símbolo (linha 165).

#define tamLin 50	// define um macro de valor constante, no caso será o tamanho das linhas do menu (linha 80).
#define tamTela 166 // tamanho da tela do terminal em tela cheia (linha 21 a 25).

int main()
{
	system("color 09"); // cor de fundo: preto; cor da letra: azul claro.

	int pro1 = 12, pro2 = 13, pro3 = 9, pro4 = 16, pro5 = 19;					   // quantidade de produtos no estoque
	int qtdePro1, qtdePro2, qtdePro3, qtdePro4, qtdePro5;						   // quantidade de produtos selecionados pelo cliente para comprar
	int vendaPro1 = 0, vendaPro2 = 0, vendaPro3 = 0, vendaPro4 = 0, vendaPro5 = 0; // número de vendas que vai aumentar com cada compra que o cliente faz
	float valTot = 0, valPagar = 0, valTroco = 0;								   // respectivamente: valor total da compra; valor para pagar; valor do troco.
	int senha = 0, senhaLogin = 0;												   // respectivamente: senha gravada no cadastro; senha de login para ser comparada com a do cadastro
	char user = '0', userLogin = '0', quest, menu, menuSell, menuPro, menuRel;	   // respectivamente: usuário gravado no cadastro; cadastro de login para ser comparado com o do cadastro; pergunta (S/N); opções do meu principal, de venda, de produtos e do relatório.

	// margem superior
	printf("%c", 201);
	for (int i = 0; i < tamTela; i++)
	{
		printf("%c", 205);
	}
	printf("%c", 187);

	printf("%c %*c", 186, tamTela, 186);

	printf("%c                                                     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                                                     %c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
	printf("%c                                                     %c                                                          %c                                                     %c", 186, 219, 219, 186);
	printf("%c                                                     %c           __  __                  ____  _ _              %c                                                     %c", 186, 219, 219, 186);
	printf("%c                                                     %c          |  \\/  |                |  _ \\(_) |             %c                                                     %c", 186, 219, 219, 186);
	printf("%c                                                     %c          | \\  / | ___  __ _  __ _| |_) |_| |_            %c                                                     %c", 186, 219, 219, 186);
	printf("%c                                                     %c          | |\\/| |/ _ \\/ _` |/ _` |  _ <| | __|           %c                                                     %c", 186, 219, 219, 186);
	printf("%c                                                     %c          | |  | |  __/ (_| | (_| | |_) | | |_            %c                                                     %c", 186, 219, 219, 186);
	printf("%c                                                     %c          |_|  |_|\\___|\\__, |\\__,_|____/|_|\\__|           %c                                                     %c", 186, 219, 219, 186);
	printf("%c                                                     %c                        __/ |                             %c                                                     %c", 186, 219, 219, 186);
	printf("%c                                                     %c                       |___/                              %c                                                     %c", 186, 219, 219, 186);
	printf("%c                                                     %c                   _____ _                                %c                                                     %c", 186, 219, 219, 186);
	printf("%c                                                     %c                  / ____| |                               %c                                                     %c", 186, 219, 219, 186);
	printf("%c                                                     %c                 | (___ | |_ ___  _ __ ___                %c                                                     %c", 186, 219, 219, 186);
	printf("%c                                                     %c                  \\___ \\| __/ _ \\| '__/ _ \\               %c                                                     %c", 186, 219, 219, 186);
	printf("%c                                                     %c                  ____) | || (_) | | |  __/               %c                                                     %c", 186, 219, 219, 186);
	printf("%c                                                     %c                 |_____/ \\__\\___/|_|  \\___|               %c                                                     %c", 186, 219, 219, 186);
	printf("%c                                                     %c                                                          %c                                                     %c", 186, 219, 219, 186);
	printf("%c                                                     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                                                     %c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 223, 223, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
	printf("%c                                                                              %c%c%c%c%c%c%c%c%c%c                                                                              %c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
	printf("%c                                                            %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                                                            %c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);

	printf("%c %*c", 186, tamTela, 186);

	printf("%c                                                                  Seja bem-vindo(a) \205 MegaBit Store!                                                                  %c", 186, 186);

	printf("%c %*c", 186, tamTela, 186);
	do
	{
		printf("%c", 204);
		for (int i = 0; i < tamTela; i++)
		{
			printf("%c", 205);
		}
		printf("%c", 185);

		printf("%c %*c", 186, tamTela, 186);
		// linha superior
		printf("%c                                               %c", 186, 201);
		for (int i = 0; i < tamLin; i++)
		{
			printf("%c", 205);
		}
		printf("%c                                                                   %c", 187, 186);

		// linhas laterais e conteudo
		printf("%c                                               ", 186);
		printf("%c", 186);
		printf("%-*s", tamLin, "                  Menu Principal");
		printf("%c                                                                   %c", 186, 186);

		// linha horizontal
		printf("%c                                               %c", 186, 204);
		for (int i = 0; i < tamLin; i++)
		{
			printf("%c", 205);
		}
		printf("%c                                                                   %c", 185, 186);

		// linhas laterais e conteudo
		printf("%c                                               %c", 186, 186);
		printf("%-*s", tamLin, "1 - Cadastrar");
		printf("%c                                                                   %c", 186, 186);

		printf("%c                                               %c", 186, 186);
		printf("%-*s", tamLin, "2 - Cat\240logo de Compra");
		printf("%c                                                                   %c", 186, 186);

		printf("%c                                               %c", 186, 186);
		printf("%-*s", tamLin, "3 - Relat\242rio de Estoque");
		printf("%c                                                                   %c", 186, 186);

		printf("%c                                               %c", 186, 186);
		printf("%-*s", tamLin, "4 - Sair do Sistema");
		printf("%c                                                                   %c", 186, 186);

		// linha inferior
		printf("%c                                               %c", 186, 200);
		for (int i = 0; i < tamLin; i++)
		{
			printf("%c", 205);
		}
		printf("%c                                                                   %c", 188, 186);
		printf("%c %*c", 186, tamTela, 186);

		// margem inferior
		printf("%c", 200);
		for (int i = 0; i < tamTela; i++)
		{
			printf("%c", 205);
		}
		printf("%c\n", 188);

		printf("\n\t\t\t\tPara onde voc\210 deseja ir: ");
		fflush(stdin);
		scanf("%c", &menu);

		system("cls");

		switch (menu)
		{
		case '1':
			if (user == '0' && senha == 0)
			{
				// margem superior
				printf("%c", 201);
				for (int i = 0; i < tamTela; i++)
				{
					printf("%c", 205);
				}
				printf("%c", 187);

				printf("%c %*c", 186, tamTela, 186);

				printf("%c                                       Crie uma nova conta com usu\240rio e senha.                                                                                       %c", 186, 186);
				printf("%c                                       O usu\240rio dever\240 ser apenas uma letra. Recomendamos colocar a primeira letra do seu \243ltimo sobrenome.                          %c", 186, 186);

				printf("%c %*c", 186, tamTela, 186);

				// margem inferior
				printf("%c", 200);
				for (int i = 0; i < tamTela; i++)
				{
					printf("%c", 205);
				}
				printf("%c\n", 188);

				while (!isalpha(user)) // tradução do código: enquanto "user" for diferente de uma letra repita.
				{
					printf("\n\t\t\t\tUsu\240rio: ");
					fflush(stdin);
					scanf(" %c", &user);
					if (!isalpha(user))
					{
						// margem superior
						printf("\n%c", 201);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c", 187);

						printf("%c %*c", 186, tamTela, 186);

						printf("%c                                       Usu\240rio inv\240lido.                                                                                                              %c", 186, 186);

						printf("%c %*c", 186, tamTela, 186);

						// margem inferior
						printf("%c", 200);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c\n", 188);
					}
				}
				printf("\n");

				// margem superior
				printf("%c", 201);
				for (int i = 0; i < tamTela; i++)
				{
					printf("%c", 205);
				}
				printf("%c", 187);

				printf("%c %*c", 186, tamTela, 186);

				printf("%c                                       A senha dever\240 ser uma sequ\210cncia de n\243meros.                                                                                  %c", 186, 186);

				printf("%c %*c", 186, tamTela, 186);

				// margem inferior
				printf("%c", 200);
				for (int i = 0; i < tamTela; i++)
				{
					printf("%c", 205);
				}
				printf("%c\n", 188);

				while (senha <= 0)
				{
					printf("\n\t\t\t\tSenha: ");
					fflush(stdin);
					scanf("%i", &senha);
					if (senha <= 0)
					{
						// margem superior
						printf("\n%c", 201);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c", 187);

						printf("%c %*c", 186, tamTela, 186);

						printf("%c                                       Senha inv\240lida.                                                                                                                %c", 186, 186);

						printf("%c %*c", 186, tamTela, 186);

						// margem inferior
						printf("%c", 200);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c\n", 188);
					}
				}

				// margem superior
				printf("\n%c", 201);
				for (int i = 0; i < tamTela; i++)
				{
					printf("%c", 205);
				}
				printf("%c", 187);

				printf("%c %*c", 186, tamTela, 186);

				printf("%c                                       Voc\210 se cadastrou com sucesso!                                                                                                 %c", 186, 186);

				printf("%c %*c", 186, tamTela, 186);

				// margem inferior
				printf("%c", 200);
				for (int i = 0; i < tamTela; i++)
				{
					printf("%c", 205);
				}
				printf("%c\n", 188);

				system("pause");
				system("cls");
			}
			else
			{
				// margem superior
				printf("%c", 201);
				for (int i = 0; i < tamTela; i++)
				{
					printf("%c", 205);
				}
				printf("%c", 187);

				printf("%c %*c", 186, tamTela, 186);

				printf("%c                                       Voc\210 j\240 \202 cadastrado em nosso sistema.                                                                                         %c", 186, 186);
				printf("%c                                       Seu usu\240rio \202: '%c'                                                                                                             %c", 186, user, 186);

				printf("%c %*c", 186, tamTela, 186);

				// margem inferior
				printf("%c", 200);
				for (int i = 0; i < tamTela; i++)
				{
					printf("%c", 205);
				}
				printf("%c\n", 188);

				system("pause");
				system("cls");
			}
			break;
		case '2':
			if (user != '0' && senha != 0) // você só poderá acessar o catálogo e o relatório caso tenha se cadastrado, se não estiver cadastrado aparecerá uma mensagem pedindo o cadastro (linha 2567 a 2594).
			{
				while ((userLogin != user && senhaLogin != senha) || (userLogin != user) || (senhaLogin != senha)) // caso você tente comprar ou ver o relatório depois de fazer o cadastro, você terá que fazer o login, depois de feito você terá livre acesso a todo o sistema.
				{																								   // aqui será comparado o usuario e senha cadastrado com o usuario e senha de login gravados abaixo (linhas 328 e 358) são igauis.
					// margem superior																		//se for igual, o login será feito, se algum dos dois estiver diferente terá que preencher o login novamente.
					printf("%c", 201);
					for (int i = 0; i < tamTela; i++)
					{
						printf("%c", 205);
					}
					printf("%c", 187);

					printf("%c %*c", 186, tamTela, 186);

					printf("%c                                       Fa\207a login com seu usu\240rio e senha.                                                                                            %c", 186, 186);

					printf("%c %*c", 186, tamTela, 186);

					// margem inferior
					printf("%c", 200);
					for (int i = 0; i < tamTela; i++)
					{
						printf("%c", 205);
					}
					printf("%c\n", 188);

					while (!isalpha(userLogin))
					{
						printf("\n\t\t\t\tUsu\240rio: ");
						fflush(stdin);
						scanf("%c", &userLogin);
						if (!isalpha(userLogin))
						{
							// margem superior
							printf("\n%c", 201);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c", 187);

							printf("%c %*c", 186, tamTela, 186);

							printf("%c                                       Usu\240rio inv\240lido.                                                                                                              %c", 186, 186);

							printf("%c %*c", 186, tamTela, 186);

							// margem inferior
							printf("%c", 200);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c\n", 188);
						}
					}
					while (senhaLogin <= 0)
					{
						printf("\n\t\t\t\tSenha: ");
						fflush(stdin);
						scanf("%i", &senhaLogin);
						if (senhaLogin <= 0)
						{
							// margem superior
							printf("\n%c", 201);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c", 187);

							printf("%c %*c", 186, tamTela, 186);

							printf("%c                                       Senha inv\240lida.                                                                                                                %c", 186, 186);

							printf("%c %*c", 186, tamTela, 186);

							// margem inferior
							printf("%c", 200);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c\n", 188);
						}
					}

					if ((userLogin != user && senhaLogin != senha) || (userLogin != user) || (senhaLogin != senha))
					{
						// margem superior
						printf("\n%c", 201);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c", 187);

						printf("%c %*c", 186, tamTela, 186);

						printf("%c                                       Usu\240rio ou senha inv\240lidos.                                                                                                    %c", 186, 186);
						senhaLogin = 0;
						userLogin = '0';

						printf("%c %*c", 186, tamTela, 186);

						// margem inferior
						printf("%c", 200);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c\n", 188);

						system("pause");
						system("cls");
					}
					else
					{
						// margem superior
						printf("\n%c", 201);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c", 187);

						printf("%c %*c", 186, tamTela, 186);

						printf("%c                                       Voc\210 fez login com sucesso!                                                                                                    %c", 186, 186);

						printf("%c %*c", 186, tamTela, 186);

						// margem inferior
						printf("%c", 200);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c\n", 188);

						system("pause");
						system("cls");
					}
				}

				do
				{
					// margem superior
					printf("%c", 201);
					for (int i = 0; i < tamTela; i++)
					{
						printf("%c", 205);
					}
					printf("%c", 187);

					printf("%c %*c", 186, tamTela, 186);
					// linha superior
					printf("%c                                               %c", 186, 201);
					for (int i = 0; i < tamLin; i++)
					{
						printf("%c", 205);
					}
					printf("%c                                                                   %c", 187, 186);

					// linhas laterais e conteudo
					printf("%c                                               %c", 186, 186);
					printf("%-*s", tamLin, "               Cat\240logo de Produtos");
					printf("%c                                                                   %c", 186, 186);

					// linha horizontal
					printf("%c                                               %c", 186, 204);
					for (int i = 0; i < tamLin; i++)
					{
						printf("%c", 205);
					}
					printf("%c                                                                   %c", 185, 186);

					// linhas laterais e conteudo
					printf("%c                                               %c", 186, 186);
					printf("%-*s", tamLin, "1 - Console Playstation 5 Sony");
					printf("%c                                                                   %c", 186, 186);

					printf("%c                                               %c", 186, 186);
					printf("%-*s", tamLin, "2 - Mem\242ria RAM 16GB Fury Beast Kingston");
					printf("%c                                                                   %c", 186, 186);

					printf("%c                                               %c", 186, 186);
					printf("%-*s", tamLin, "3 - Monitor Gamer T350 Samsung");
					printf("%c                                                                   %c", 186, 186);

					printf("%c                                               %c", 186, 186);
					printf("%-*s", tamLin, "4 - SSD 480GB A400 Kingston");
					printf("%c                                                                   %c", 186, 186);

					printf("%c                                               %c", 186, 186);
					printf("%-*s", tamLin, "5 - Teclado Mec\203nico Horus TKL K622 Redragon");
					printf("%c                                                                   %c", 186, 186);

					printf("%c                                               %c", 186, 186);
					printf("%-*s", tamLin, "6 - Voltar");
					printf("%c                                                                   %c", 186, 186);

					// linha inferior
					printf("%c                                               %c", 186, 200);
					for (int i = 0; i < tamLin; i++)
					{
						printf("%c", 205);
					}
					printf("%c                                                                   %c", 188, 186);
					printf("%c %*c", 186, tamTela, 186);

					// margem inferior
					printf("%c", 200);
					for (int i = 0; i < tamTela; i++)
					{
						printf("%c", 205);
					}
					printf("%c\n", 188);

					printf("\n\t\t\t\tVer iformac\744es de qual produto: ");
					fflush(stdin);
					scanf("%c", &menuSell);

					system("cls");

					switch (menuSell)
					{
					case '1':
						do
						{
							// margem superior
							printf("%c", 201);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c", 187);

							printf("%c %*c", 186, tamTela, 186);

							printf("%c                                               Nome: Console Playstation 5 Sony                                                                                       %c", 186, 186);
							printf("%c                                               Informa\207\744es T\202cnicas:                                                                                                  %c", 186, 186);
							printf("%c %*c", 186, tamTela, 186);
							printf("%c                                               Tipo:                                                                                                                  %c", 186, 186);
							printf("%c                                               -M\641dia f\641sica                                                                                                          %c", 186, 186);
							printf("%c                                               CPU:                                                                                                                   %c", 186, 186);
							printf("%c                                               -x86-64-AMD Ryzen\"Zen2\"                                                                                                %c", 186, 186);
							printf("%c                                               -8 Cores/16 Threads                                                                                                    %c", 186, 186);
							printf("%c                                               M\202moria:                                                                                                               %c", 186, 186);
							printf("%c                                               -Tipo: GDDR6                                                                                                           %c", 186, 186);
							printf("%c                                               -Capacidade: 16GB                                                                                                      %c", 186, 186);
							printf("%c                                               Armazenamento:                                                                                                         %c", 186, 186);
							printf("%c                                               -Tipo: SSD                                                                                                             %c", 186, 186);
							printf("%c                                               -Capacidade: 825GB                                                                                                     %c", 186, 186);
							printf("%c                                               Desing:                                                                                                                %c", 186, 186);
							printf("%c                                               -Cor: Branco                                                                                                           %c", 186, 186);
							printf("%c                                               -Dimens\744es: 390 x 104 x 260 mm                                                                                         %c", 186, 186);
							printf("%c                                               Entrada/Sa\641da:                                                                                                         %c", 186, 186);
							printf("%c                                               -1x USB type-A port(Hi-Speed USB)                                                                                      %c", 186, 186);
							printf("%c                                               -2x USB type-A port(Super-Speed USB 10Gbps)                                                                            %c", 186, 186);
							printf("%c                                               -1x USB type-C port(Super-Speed USB 10Gbps)                                                                            %c", 186, 186);
							printf("%c %*c", 186, tamTela, 186);
							printf("%c                                               Caracter\641sticas:                                                                                                       %c", 186, 186);
							printf("%c                                               -Marca: Sony                                                                                                           %c", 186, 186);
							printf("%c                                               -Modelo: Playstation 5 1214A                                                                                           %c", 186, 186);

							printf("%c %*c", 186, tamTela, 186);

							// linha superior
							printf("%c                                               ", 186);
							printf("%c", 201);
							for (int i = 0; i < tamLin; i++)
							{
								printf("%c", 205);
							}
							printf("%c                                                                   %c", 187, 186);

							// linhas laterais e conteudo
							printf("%c                                               ", 186);
							printf("%c", 186);
							printf("%-*s", tamLin, "                  Menu de Compra");
							printf("%c                                                                   %c", 186, 186);

							// linha horizontal
							printf("%c                                               ", 186);
							printf("%c", 204);
							for (int i = 0; i < tamLin; i++)
							{
								printf("%c", 205);
							}
							printf("%c                                                                   %c", 185, 186);

							// linhas laterais e conteudo
							printf("%c                                               ", 186);
							printf("%c", 186);
							printf("%-*s", tamLin, "1 - Comprar agora");
							printf("%c                                                                   %c", 186, 186);

							printf("%c                                               ", 186);
							printf("%c", 186);
							printf("%-*s", tamLin, "2 - Voltar");
							printf("%c                                                                   %c", 186, 186);

							// linha inferior
							printf("%c                                               ", 186);
							printf("%c", 200);
							for (int i = 0; i < tamLin; i++)
							{
								printf("%c", 205);
							}
							printf("%c                                                                   %c", 188, 186);

							printf("%c %*c", 186, tamTela, 186);

							// margem inferior
							printf("%c", 200);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c\n", 188);

							printf("\n\t\t\t\tO que deseja fazer: ");
							fflush(stdin);
							scanf("%c", &menuPro);

							system("cls");

							if (menuPro == '1')
							{
								while (quest != 'S' || quest != 's' || quest != 'N' || quest != 'n')
								{
									if (pro1 > 0) // a compra só será feita caso tiver produtos em estoque.
									{
										// margem superior
										printf("%c", 201);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c", 187);

										printf("%c %*c", 186, tamTela, 186);

										printf("%c                                       Nome do produto: Console Playstation 5 Sony                                                                                    %c", 186, 186);
										printf("%c                                       Pre\207o: R$ 3440,91                                                                                                              %c", 186, 186);
										printf("%c                                       Frete: R$ 28,43                                                                                                                %c", 186, 186);

										printf("%c %*c", 186, tamTela, 186);

										// margem inferior
										printf("%c", 200);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c\n", 188);

										printf("\n\t\t\t\tTem certeza que voce quer realizar esta compra? S/N: ");
										fflush(stdin);
										scanf("%c", &quest);

										if (quest == 'S' || quest == 's')
										{
											do
											{
												printf("\n\t\t\t\tQual a quantidade do produto Console Playstation 5 Sony voc\210 deseja comprar: ");
												fflush(stdin);
												scanf("%i", &qtdePro1);

												if (qtdePro1 > pro1) // caso a quantidade selecionada for maior que o estoque, não será possível realizar a compra.
												{
													// margem superior
													printf("\n%c", 201);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c", 187);

													printf("%c %*c", 186, tamTela, 186);

													printf("%c                                       N\706o temos a quantidade de produtos selecionada.                                                                                %c", 186, 186);
													printf("%c                                       A quantidade do produto Console Playstation 5 Sony \202 de: %02i.                                                                   %c", 186, pro1, 186);
													printf("%c                                       Confira o relat\242rio de estoque para mais informa\207\744es.                                                                          %c", 186, 186);

													printf("%c %*c", 186, tamTela, 186);

													// margem inferior
													printf("%c", 200);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c\n", 188);
												}
											} while (qtdePro1 > pro1); // vai se repetir enquanto a quantidade for maior que o estoque, até que uma quantidade válido seja colocada.

											valTot = (3440.91 * qtdePro1) + 28.43;
											pro1 = pro1 - qtdePro1; // aqui a quantidade de prooduto será diminuida, assim, caso o produto chegue a 0, não será possível comprar (liha 873 a 901), e a quantidade de produtos disponíveis, que são mostrados no relatório, vai diminuir (2842).

											while (valTot > 0) // looping de repetição para que o valor total calculado (linha 697) seja pago totalmente. se você pagar com mais do que suficiente, você receberá seu troco (linha 728 a 755). se voce pagar com menos, será calculado o valor restante que precisa ser pago (linha 756 a 759).
											{
												// margem superior
												printf("\n%c", 201);
												for (int i = 0; i < tamTela; i++)
												{
													printf("%c", 205);
												}
												printf("%c", 187);

												printf("%c %*c", 186, tamTela, 186);

												printf("%c                                       Voc\210 precisa pagar R$ %10.2f                                                                                               %c", 186, valTot, 186);

												printf("%c %*c", 186, tamTela, 186);

												// margem inferior
												printf("%c", 200);
												for (int i = 0; i < tamTela; i++)
												{
													printf("%c", 205);
												}
												printf("%c\n", 188);

												printf("\n\t\t\t\tDeposite seu dinheiro: R$ ");
												fflush(stdin);
												scanf("%f", &valPagar);

												if (valPagar > valTot)
												{
													valTroco = valPagar - valTot;
													valTot = valTot - (valPagar - valTroco);

													// margem superior
													printf("\n%c", 201);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c", 187);

													printf("%c %*c", 186, tamTela, 186);

													printf("%c                                       Voc\210 pagou com um valor mais do que suficiente, aqui est\240 seu troco: R$ %10.2f                                             %c", 186, valTroco, 186);

													printf("%c %*c", 186, tamTela, 186);

													// margem inferior
													printf("%c", 200);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c\n", 188);
													break;
												}
												else
												{
													valTot = valTot - valPagar;
												}
											}

											// margem superior
											printf("%c", 201);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c", 187);

											printf("%c %*c", 186, tamTela, 186);

											printf("%c                                       Agradecemos pela sua compra! :D                                                                                                %c", 186, 186);
											printf("%c                                       Enviaremos o seu pedido o mais r\240pido poss\641vel!                                                                                %c", 186, 186);
											vendaPro1++; // depois de realizada a compra, não importa a quantidade comprada, o número de vendas vai aumentar em 1 e será contabilizado no relatório (linha 2843).

											printf("%c %*c", 186, tamTela, 186);

											// linha superior
											printf("%c                                               ", 186);
											printf("%c", 201);
											for (int i = 0; i < tamLin; i++)
											{
												printf("%c", 205);
											}
											printf("%c                                                                   %c", 187, 186);

											// linhas laterais e conteudo
											printf("%c                                               ", 186);
											printf("%c", 186);
											printf("%-*s", tamLin, "                  Menu de Compra");
											printf("%c                                                                   %c", 186, 186);

											// linha horizontal
											printf("%c                                               ", 186);
											printf("%c", 204);
											for (int i = 0; i < tamLin; i++)
											{
												printf("%c", 205);
											}
											printf("%c                                                                   %c", 185, 186);

											// linhas laterais e conteudo
											printf("%c                                               ", 186);
											printf("%c", 186);
											printf("%-*s", tamLin, "1 - Comprar novamente");
											printf("%c                                                                   %c", 186, 186);

											printf("%c                                               ", 186);
											printf("%c", 186);
											printf("%-*s", tamLin, "2 - Voltar");
											printf("%c                                                                   %c", 186, 186);

											// linha inferior
											printf("%c                                               ", 186);
											printf("%c", 200);
											for (int i = 0; i < tamLin; i++)
											{
												printf("%c", 205);
											}
											printf("%c                                                                   %c", 188, 186);

											printf("%c %*c", 186, tamTela, 186);

											// margem inferior
											printf("%c", 200);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c\n", 188);

											printf("\n\t\t\t\tO que deseja fazer: ");
											fflush(stdin);
											scanf("%c", &menuPro);

											system("cls");

											break;
										}
										else if (quest == 'N' || quest == 'n')
										{
											printf("\n");
											break;
										}
										else
										{
											// margem superior
											printf("\n%c", 201);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c", 187);

											printf("%c %*c", 186, tamTela, 186);

											printf("%c                                       Op\207\706o inv\240lida.                                                                                                                %c", 186, 186);

											printf("%c %*c", 186, tamTela, 186);

											// margem inferior
											printf("%c", 200);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c\n", 188);

											system("pause");
											system("cls");
										}
									}
									else
									{
										// margem superior
										printf("%c", 201);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c", 187);

										printf("%c %*c", 186, tamTela, 186);

										printf("%c                                       Infelizmente n\706o temos o produto Console Playstation 5 Sony no nosso estoque.                                                  %c", 186, 186);
										printf("%c                                       Confira o relat\242rio de estoque para mais informa\207\744es.                                                                          %c", 186, 186);

										printf("%c %*c", 186, tamTela, 186);

										// margem inferior
										printf("%c", 200);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c\n", 188);

										system("pause");
										system("cls");
										break;
									}
								}
							}
							else if (menuPro != '1' && menuPro != '2')
							{
								// margem superior
								printf("%c", 201);
								for (int i = 0; i < tamTela; i++)
								{
									printf("%c", 205);
								}
								printf("%c", 187);

								printf("%c %*c", 186, tamTela, 186);

								printf("%c                                       Op\207\706o inv\240lida.                                                                                                                %c", 186, 186);

								printf("%c %*c", 186, tamTela, 186);

								// margem inferior
								printf("%c", 200);
								for (int i = 0; i < tamTela; i++)
								{
									printf("%c", 205);
								}
								printf("%c\n", 188);

								system("pause");
								system("cls");
							}
						} while (menuPro != '2');
						break;
					case '2': // até o case '5' o código é basicamente o mesmo, com a mudança de alguns valores, mas o processo será o mesmo.
						do
						{
							// margem superior
							printf("%c", 201);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c", 187);

							printf("%c %*c", 186, tamTela, 186);

							printf("%c                                               Nome: Mem\242oria RAM 16GB Fury Beast Kingston                                                                            %c", 186, 186);
							printf("%c                                               Informa\207\744es T\202cnicas:                                                                                                  %c", 186, 186);
							printf("%c %*c", 186, tamTela, 186);
							printf("%c                                               Especifica\207\744es:                                                                                                        %c", 186, 186);
							printf("%c                                               -Fator de forma: DDR4                                                                                                  %c", 186, 186);
							printf("%c                                               -Velocidade: 3200 MHz                                                                                                  %c", 186, 186);
							printf("%c                                               -Lat\210ncias: CL16                                                                                                       %c", 186, 186);
							printf("%c                                               -Capacidade: 16GB                                                                                                      %c", 186, 186);
							printf("%c                                               -Dimens\744es: 133,35 x 34,1 x 7,2 mm                                                                                     %c", 186, 186);
							printf("%c %*c", 186, tamTela, 186);
							printf("%c                                               Caracter\641sticas:                                                                                                       %c", 186, 186);
							printf("%c                                               -Marca: Kingston                                                                                                       %c", 186, 186);
							printf("%c                                               -Modelo: KF432C16BB1/16                                                                                                %c", 186, 186);

							printf("%c %*c", 186, tamTela, 186);

							// linha superior
							printf("%c                                               ", 186);
							printf("%c", 201);
							for (int i = 0; i < tamLin; i++)
							{
								printf("%c", 205);
							}
							printf("%c                                                                   %c", 187, 186);

							// linhas laterais e conteudo
							printf("%c                                               ", 186);
							printf("%c", 186);
							printf("%-*s", tamLin, "                  Menu de Compra");
							printf("%c                                                                   %c", 186, 186);

							// linha horizontal
							printf("%c                                               ", 186);
							printf("%c", 204);
							for (int i = 0; i < tamLin; i++)
							{
								printf("%c", 205);
							}
							printf("%c                                                                   %c", 185, 186);

							// linhas laterais e conteudo
							printf("%c                                               ", 186);
							printf("%c", 186);
							printf("%-*s", tamLin, "1 - Comprar agora");
							printf("%c                                                                   %c", 186, 186);

							printf("%c                                               ", 186);
							printf("%c", 186);
							printf("%-*s", tamLin, "2 - Voltar");
							printf("%c                                                                   %c", 186, 186);

							// linha inferior
							printf("%c                                               ", 186);
							printf("%c", 200);
							for (int i = 0; i < tamLin; i++)
							{
								printf("%c", 205);
							}
							printf("%c                                                                   %c", 188, 186);

							printf("%c %*c", 186, tamTela, 186);

							// margem inferior
							printf("%c", 200);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c\n", 188);

							printf("\n\t\t\t\tO que deseja fazer: ");
							fflush(stdin);
							scanf("%c", &menuPro);

							system("cls");

							if (menuPro == '1')
							{
								while (quest != 'S' || quest != 's' || quest != 'N' || quest != 'n')
								{
									if (pro2 > 0)
									{
										// margem superior
										printf("%c", 201);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c", 187);

										printf("%c %*c", 186, tamTela, 186);

										printf("%c                                       Nome: Mem\242oria RAM 16GB Fury Beast Kingston                                                                                    %c", 186, 186);
										printf("%c                                       Pre\207o: R$ 279,99                                                                                                               %c", 186, 186);
										printf("%c                                       Frete: R$ 13,99                                                                                                                %c", 186, 186);

										printf("%c %*c", 186, tamTela, 186);

										// margem inferior
										printf("%c", 200);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c\n", 188);

										printf("\n\t\t\t\tTem certeza que voce quer realizar esta compra? S/N: ");
										fflush(stdin);
										scanf("%c", &quest);

										if (quest == 'S' || quest == 's')
										{
											do
											{
												printf("\n\t\t\t\tQual a quantidade do produto Mem\242oria RAM 16GB Fury Beast Kingston voc\210 deseja comprar: ");
												fflush(stdin);
												scanf("%i", &qtdePro2);

												if (qtdePro2 > pro2)
												{
													// margem superior
													printf("\n%c", 201);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c", 187);

													printf("%c %*c", 186, tamTela, 186);

													printf("%c                                       N\706o temos a quantidade de produtos selecionada.                                                                                %c", 186, 186);
													printf("%c                                       A quantidade do produto Mem\242oria RAM 16GB Fury Beast Kingston \202 de: %02i.                                                        %c", 186, pro2, 186);
													printf("%c                                       Confira o relat\242rio de estoque para mais informa\207\744es.                                                                          %c", 186, 186);

													printf("%c %*c", 186, tamTela, 186);

													// margem inferior
													printf("%c", 200);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c\n", 188);
												}
											} while (qtdePro2 > pro2);

											valTot = (279.99 * qtdePro2) + 13.99;
											pro2 = pro2 - qtdePro2;

											while (valTot > 0)
											{
												// margem superior
												printf("\n%c", 201);
												for (int i = 0; i < tamTela; i++)
												{
													printf("%c", 205);
												}
												printf("%c", 187);

												printf("%c %*c", 186, tamTela, 186);

												printf("%c                                       Voc\210 precisa pagar R$ %10.2f                                                                                               %c", 186, valTot, 186);

												printf("%c %*c", 186, tamTela, 186);

												// margem inferior
												printf("%c", 200);
												for (int i = 0; i < tamTela; i++)
												{
													printf("%c", 205);
												}
												printf("%c\n", 188);

												printf("\n\t\t\t\tDeposite seu dinheiro: R$ ");
												fflush(stdin);
												scanf("%f", &valPagar);

												if (valPagar > valTot)
												{
													valTroco = valPagar - valTot;
													valTot = valTot - (valPagar - valTroco);

													// margem superior
													printf("\n%c", 201);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c", 187);

													printf("%c %*c", 186, tamTela, 186);

													printf("%c                                       Voc\210 pagou com um valor mais do que suficiente, aqui est\240 seu troco: R$ %10.2f                                             %c", 186, valTroco, 186);

													printf("%c %*c", 186, tamTela, 186);

													// margem inferior
													printf("%c", 200);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c\n", 188);
													break;
												}
												else
												{
													valTot = valTot - valPagar;
												}
											}

											// margem superior
											printf("%c", 201);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c", 187);

											printf("%c %*c", 186, tamTela, 186);

											printf("%c                                       Agradecemos pela sua compra! :D                                                                                                %c", 186, 186);
											printf("%c                                       Enviaremos o seu pedido o mais r\240pido poss\641vel!                                                                                %c", 186, 186);
											vendaPro2++;

											printf("%c %*c", 186, tamTela, 186);

											// linha superior
											printf("%c                                               ", 186);
											printf("%c", 201);
											for (int i = 0; i < tamLin; i++)
											{
												printf("%c", 205);
											}
											printf("%c                                                                   %c", 187, 186);

											// linhas laterais e conteudo
											printf("%c                                               ", 186);
											printf("%c", 186);
											printf("%-*s", tamLin, "                  Menu de Compra");
											printf("%c                                                                   %c", 186, 186);

											// linha horizontal
											printf("%c                                               ", 186);
											printf("%c", 204);
											for (int i = 0; i < tamLin; i++)
											{
												printf("%c", 205);
											}
											printf("%c                                                                   %c", 185, 186);

											// linhas laterais e conteudo
											printf("%c                                               ", 186);
											printf("%c", 186);
											printf("%-*s", tamLin, "1 - Comprar novamente");
											printf("%c                                                                   %c", 186, 186);

											printf("%c                                               ", 186);
											printf("%c", 186);
											printf("%-*s", tamLin, "2 - Voltar");
											printf("%c                                                                   %c", 186, 186);

											// linha inferior
											printf("%c                                               ", 186);
											printf("%c", 200);
											for (int i = 0; i < tamLin; i++)
											{
												printf("%c", 205);
											}
											printf("%c                                                                   %c", 188, 186);

											printf("%c %*c", 186, tamTela, 186);

											// margem inferior
											printf("%c", 200);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c\n", 188);

											printf("\n\t\t\t\tO que deseja fazer: ");
											fflush(stdin);
											scanf("%c", &menuPro);

											system("cls");

											break;
										}
										else if (quest == 'N' || quest == 'n')
										{
											printf("\n");
											break;
										}
										else
										{
											// margem superior
											printf("\n%c", 201);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c", 187);

											printf("%c %*c", 186, tamTela, 186);

											printf("%c                                       Op\207\706o inv\240lida.                                                                                                                %c", 186, 186);

											printf("%c %*c", 186, tamTela, 186);

											// margem inferior
											printf("%c", 200);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c\n", 188);

											system("pause");
											system("cls");
										}
									}
									else
									{
										// margem superior
										printf("%c", 201);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c", 187);

										printf("%c %*c", 186, tamTela, 186);

										printf("%c                                       Infelizmente n\706o temos o produto Mem\242oria RAM 16GB Fury Beast Kingston no nosso estoque.                                       %c", 186, 186);
										printf("%c                                       Confira o relat\242rio de estoque para mais informa\207\744es.                                                                          %c", 186, 186);

										printf("%c %*c", 186, tamTela, 186);

										// margem inferior
										printf("%c", 200);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c\n", 188);

										system("pause");
										system("cls");
										break;
									}
								}
							}
							else if (menuPro != '1' && menuPro != '2')
							{
								// margem superior
								printf("%c", 201);
								for (int i = 0; i < tamTela; i++)
								{
									printf("%c", 205);
								}
								printf("%c", 187);

								printf("%c %*c", 186, tamTela, 186);

								printf("%c                                       Op\207\706o inv\240lida.                                                                                                                %c", 186, 186);

								printf("%c %*c", 186, tamTela, 186);

								// margem inferior
								printf("%c", 200);
								for (int i = 0; i < tamTela; i++)
								{
									printf("%c", 205);
								}
								printf("%c\n", 188);

								system("pause");
								system("cls");
							}
						} while (menuPro != '2');
						break;
					case '3':
						do
						{
							// margem superior
							printf("%c", 201);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c", 187);

							printf("%c %*c", 186, tamTela, 186);

							printf("%c                                               Nome: Monitor Gamer Samsung T350                                                                                       %c", 186, 186);
							printf("%c                                               Informa\207\744es T\202cnicas:                                                                                                  %c", 186, 186);
							printf("%c %*c", 186, tamTela, 186);
							printf("%c                                               Tela:                                                                                                                  %c", 186, 186);
							printf("%c                                               -Tamanho da tela: 24\"                                                                                                  %c", 186, 186);
							printf("%c                                               -Tipo de painel: IPS                                                                                                   %c", 186, 186);
							printf("%c                                               -Curvatura da tela: Plano                                                                                              %c", 186, 186);
							printf("%c                                               -Resolu\207\706o: 1920 x 1080, Full HD                                                                                       %c", 186, 186);
							printf("%c                                               -Propor\207\706 da tela: 16:09                                                                                               %c", 186, 186);
							printf("%c                                               -Tempo de resposta: 5 ms                                                                                               %c", 186, 186);
							printf("%c                                               -Taxa de atualiza\207\706o: 75Hz                                                                                             %c", 186, 186);
							printf("%c                                               Entrada:                                                                                                               %c", 186, 186);
							printf("%c                                               -1x HDMI 1.4                                                                                                           %c", 186, 186);
							printf("%c                                               -1x D-Sub                                                                                                              %c", 186, 186);
							printf("%c                                               Design:                                                                                                                %c", 186, 186);
							printf("%c                                               -Cor: Preto                                                                                                            %c", 186, 186);
							printf("%c                                               Energia:                                                                                                               %c", 186, 186);
							printf("%c                                               -Fonte de alimenta\207\706o: AC 100-240 V                                                                                    %c", 186, 186);
							printf("%c %*c", 186, tamTela, 186);
							printf("%c                                               Caracter\641sticas:                                                                                                       %c", 186, 186);
							printf("%c                                               -Marca: Samsung                                                                                                        %c", 186, 186);
							printf("%c                                               -Modelo: LF24T350FHLMZD                                                                                                %c", 186, 186);

							printf("%c %*c", 186, tamTela, 186);

							// linha superior
							printf("%c                                               ", 186);
							printf("%c", 201);
							for (int i = 0; i < tamLin; i++)
							{
								printf("%c", 205);
							}
							printf("%c                                                                   %c", 187, 186);

							// linhas laterais e conteudo
							printf("%c                                               ", 186);
							printf("%c", 186);
							printf("%-*s", tamLin, "                  Menu de Compra");
							printf("%c                                                                   %c", 186, 186);

							// linha horizontal
							printf("%c                                               ", 186);
							printf("%c", 204);
							for (int i = 0; i < tamLin; i++)
							{
								printf("%c", 205);
							}
							printf("%c                                                                   %c", 185, 186);

							// linhas laterais e conteudo
							printf("%c                                               ", 186);
							printf("%c", 186);
							printf("%-*s", tamLin, "1 - Comprar agora");
							printf("%c                                                                   %c", 186, 186);

							printf("%c                                               ", 186);
							printf("%c", 186);
							printf("%-*s", tamLin, "2 - Voltar");
							printf("%c                                                                   %c", 186, 186);

							// linha inferior
							printf("%c                                               ", 186);
							printf("%c", 200);
							for (int i = 0; i < tamLin; i++)
							{
								printf("%c", 205);
							}
							printf("%c                                                                   %c", 188, 186);

							printf("%c %*c", 186, tamTela, 186);

							// margem inferior
							printf("%c", 200);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c\n", 188);

							printf("\n\t\t\t\tO que deseja fazer: ");
							fflush(stdin);
							scanf("%c", &menuPro);

							system("cls");

							if (menuPro == '1')
							{
								while (quest != 'S' || quest != 's' || quest != 'N' || quest != 'n')
								{
									if (pro3 > 0)
									{
										// margem superior
										printf("%c", 201);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c", 187);

										printf("%c %*c", 186, tamTela, 186);

										printf("%c                                       Nome: Monitor Gamer Samsung T350                                                                                               %c", 186, 186);
										printf("%c                                       Pre\207o: R$ 568,90                                                                                                               %c", 186, 186);
										printf("%c                                       Frete: R$ 28,43                                                                                                                %c", 186, 186);

										printf("%c %*c", 186, tamTela, 186);

										// margem inferior
										printf("%c", 200);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c\n", 188);

										printf("\n\t\t\t\tTem certeza que voce quer realizar esta compra? S/N: ");
										fflush(stdin);
										scanf("%c", &quest);

										if (quest == 'S' || quest == 's')
										{
											do
											{
												printf("\n\t\t\t\tQual a quantidade do produto Monitor Gamer Samsung T350 voc\210 deseja comprar: ");
												fflush(stdin);
												scanf("%i", &qtdePro3);

												if (qtdePro3 > pro3)
												{
													// margem superior
													printf("\n%c", 201);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c", 187);

													printf("%c %*c", 186, tamTela, 186);

													printf("%c                                       N\706o temos a quantidade de produtos selecionada.                                                                                %c", 186, 186);
													printf("%c                                       A quantidade do produto Monitor Gamer Samsung T350 \202 de: %02i.                                                                   %c", 186, pro3, 186);
													printf("%c                                       Confira o relat\242rio de estoque para mais informa\207\744es.                                                                          %c", 186, 186);

													printf("%c %*c", 186, tamTela, 186);

													// margem inferior
													printf("%c", 200);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c\n", 188);
												}
											} while (qtdePro3 > pro3);

											valTot = (568.90 * qtdePro3) + 28.43;
											pro3 = pro3 - qtdePro3;

											while (valTot > 0)
											{
												// margem superior
												printf("\n%c", 201);
												for (int i = 0; i < tamTela; i++)
												{
													printf("%c", 205);
												}
												printf("%c", 187);

												printf("%c %*c", 186, tamTela, 186);

												printf("%c                                       Voc\210 precisa pagar R$ %10.2f                                                                                               %c", 186, valTot, 186);

												printf("%c %*c", 186, tamTela, 186);

												// margem inferior
												printf("%c", 200);
												for (int i = 0; i < tamTela; i++)
												{
													printf("%c", 205);
												}
												printf("%c\n", 188);

												printf("\n\t\t\t\tDeposite seu dinheiro: R$ ");
												fflush(stdin);
												scanf("%f", &valPagar);

												if (valPagar > valTot)
												{
													valTroco = valPagar - valTot;
													valTot = valTot - (valPagar - valTroco);

													// margem superior
													printf("\n%c", 201);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c", 187);

													printf("%c %*c", 186, tamTela, 186);

													printf("%c                                       Voc\210 pagou com um valor mais do que suficiente, aqui est\240 seu troco: R$ %10.2f                                             %c", 186, valTroco, 186);

													printf("%c %*c", 186, tamTela, 186);

													// margem inferior
													printf("%c", 200);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c\n", 188);
													break;
												}
												else
												{
													valTot = valTot - valPagar;
												}
											}

											// margem superior
											printf("%c", 201);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c", 187);

											printf("%c %*c", 186, tamTela, 186);

											printf("%c                                       Agradecemos pela sua compra! :D                                                                                                %c", 186, 186);
											printf("%c                                       Enviaremos o seu pedido o mais r\240pido poss\641vel!                                                                                %c", 186, 186);
											vendaPro3++;

											printf("%c %*c", 186, tamTela, 186);

											// linha superior
											printf("%c                                               ", 186);
											printf("%c", 201);
											for (int i = 0; i < tamLin; i++)
											{
												printf("%c", 205);
											}
											printf("%c                                                                   %c", 187, 186);

											// linhas laterais e conteudo
											printf("%c                                               ", 186);
											printf("%c", 186);
											printf("%-*s", tamLin, "                  Menu de Compra");
											printf("%c                                                                   %c", 186, 186);

											// linha horizontal
											printf("%c                                               ", 186);
											printf("%c", 204);
											for (int i = 0; i < tamLin; i++)
											{
												printf("%c", 205);
											}
											printf("%c                                                                   %c", 185, 186);

											// linhas laterais e conteudo
											printf("%c                                               ", 186);
											printf("%c", 186);
											printf("%-*s", tamLin, "1 - Comprar agora");
											printf("%c                                                                   %c", 186, 186);

											printf("%c                                               ", 186);
											printf("%c", 186);
											printf("%-*s", tamLin, "2 - Voltar");
											printf("%c                                                                   %c", 186, 186);

											// linha inferior
											printf("%c                                               ", 186);
											printf("%c", 200);
											for (int i = 0; i < tamLin; i++)
											{
												printf("%c", 205);
											}
											printf("%c                                                                   %c", 188, 186);

											printf("%c %*c", 186, tamTela, 186);

											// margem inferior
											printf("%c", 200);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c\n", 188);

											printf("\n\t\t\t\tO que deseja fazer: ");
											fflush(stdin);
											scanf("%c", &menuPro);

											system("cls");

											break;
										}
										else if (quest == 'N' || quest == 'n')
										{
											printf("\n");
											break;
										}
										else
										{
											// margem superior
											printf("\n%c", 201);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c", 187);

											printf("%c %*c", 186, tamTela, 186);

											printf("%c                                       Op\207\706o inv\240lida.                                                                                                                %c", 186, 186);

											printf("%c %*c", 186, tamTela, 186);

											// margem inferior
											printf("%c", 200);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c\n", 188);

											system("pause");
											system("cls");
										}
									}
									else
									{
										// margem superior
										printf("%c", 201);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c", 187);

										printf("%c %*c", 186, tamTela, 186);

										printf("%c                                       Infelizmente n\706o temos o produto Monitor Gamer Samsung T350 no nosso estoque.                                                  %c", 186, 186);
										printf("%c                                       Confira o relat\242rio de estoque para mais informa\207\744es.                                                                          %c", 186, 186);

										printf("%c %*c", 186, tamTela, 186);

										// margem inferior
										printf("%c", 200);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c\n", 188);

										system("pause");
										system("cls");
										break;
									}
								}
							}
							else if (menuPro != '1' && menuPro != '2')
							{
								// margem superior
								printf("%c", 201);
								for (int i = 0; i < tamTela; i++)
								{
									printf("%c", 205);
								}
								printf("%c", 187);

								printf("%c %*c", 186, tamTela, 186);

								printf("%c                                       Op\207\706o inv\240lida.                                                                                                                %c", 186, 186);

								printf("%c %*c", 186, tamTela, 186);

								// margem inferior
								printf("%c", 200);
								for (int i = 0; i < tamTela; i++)
								{
									printf("%c", 205);
								}
								printf("%c\n", 188);

								system("pause");
								system("cls");
							}
						} while (menuPro != '2');
						break;
					case '4':
						do
						{
							// margem superior
							printf("%c", 201);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c", 187);

							printf("%c %*c", 186, tamTela, 186);

							printf("%c                                               Nome: SSD 480GB A400 Kingston                                                                                          %c", 186, 186);
							printf("%c                                               Informa\207\744es T\202cnicas:                                                                                                  %c", 186, 186);
							printf("%c %*c", 186, tamTela, 186);
							printf("%c                                               Especifica\207\744es:                                                                                                        %c", 186, 186);
							printf("%c                                               -Formato: 2,5 pol                                                                                                      %c", 186, 186);
							printf("%c                                               -Interface: SATA Rev. 3.0 (6Gb/s)                                                                                      %c", 186, 186);
							printf("%c                                               -Capacidade: 480GB                                                                                                     %c", 186, 186);
							printf("%c                                               -Performance de refer\210ncia: at\202 500MB/s para leitura e at\202 450MB/s para grava\207\706o                                       %c", 186, 186);
							printf("%c %*c", 186, tamTela, 186);
							printf("%c                                               Caracter\641sticas:                                                                                                       %c", 186, 186);
							printf("%c                                               -Marca: Kingston                                                                                                       %c", 186, 186);
							printf("%c                                               -Modelo: SA400S37/480G                                                                                                 %c", 186, 186);

							printf("%c %*c", 186, tamTela, 186);

							// linha superior
							printf("%c                                               ", 186);
							printf("%c", 201);
							for (int i = 0; i < tamLin; i++)
							{
								printf("%c", 205);
							}
							printf("%c                                                                   %c", 187, 186);

							// linhas laterais e conteudo
							printf("%c                                               ", 186);
							printf("%c", 186);
							printf("%-*s", tamLin, "                  Menu de Compra");
							printf("%c                                                                   %c", 186, 186);

							// linha horizontal
							printf("%c                                               ", 186);
							printf("%c", 204);
							for (int i = 0; i < tamLin; i++)
							{
								printf("%c", 205);
							}
							printf("%c                                                                   %c", 185, 186);

							// linhas laterais e conteudo
							printf("%c                                               ", 186);
							printf("%c", 186);
							printf("%-*s", tamLin, "1 - Comprar agora");
							printf("%c                                                                   %c", 186, 186);

							printf("%c                                               ", 186);
							printf("%c", 186);
							printf("%-*s", tamLin, "2 - Voltar");
							printf("%c                                                                   %c", 186, 186);

							// linha inferior
							printf("%c                                               ", 186);
							printf("%c", 200);
							for (int i = 0; i < tamLin; i++)
							{
								printf("%c", 205);
							}
							printf("%c                                                                   %c", 188, 186);

							printf("%c %*c", 186, tamTela, 186);

							// margem inferior
							printf("%c", 200);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c\n", 188);

							printf("\n\t\t\t\tO que deseja fazer: ");
							fflush(stdin);
							scanf("%c", &menuPro);

							system("cls");

							if (menuPro == '1')
							{
								while (quest != 'S' || quest != 's' || quest != 'N' || quest != 'n')
								{
									if (pro4 > 0)
									{
										// margem superior
										printf("%c", 201);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c", 187);

										printf("%c %*c", 186, tamTela, 186);

										printf("%c                                       Nome: SSD 480GB A400 Kingston                                                                                                  %c", 186, 186);
										printf("%c                                       Pre\207o: R$ 249,99                                                                                                               %c", 186, 186);
										printf("%c                                       Frete: R$ 12,50                                                                                                                %c", 186, 186);

										printf("%c %*c", 186, tamTela, 186);

										// margem inferior
										printf("%c", 200);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c\n", 188);

										printf("\n\t\t\t\tTem certeza que voce quer realizar esta compra? S/N: ");
										fflush(stdin);
										scanf("%c", &quest);

										if (quest == 'S' || quest == 's')
										{
											do
											{
												printf("\n\t\t\t\tQual a quantidade do produto SSD 480GB A400 Kingston voc\210 deseja comprar: ");
												fflush(stdin);
												scanf("%i", &qtdePro4);

												if (qtdePro4 > pro4)
												{
													// margem superior
													printf("\n%c", 201);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c", 187);

													printf("%c %*c", 186, tamTela, 186);

													printf("%c                                       N\706o temos a quantidade de produtos selecionada.                                                                                %c", 186, 186);
													printf("%c                                       A quantidade do produto SSD 480GB A400 Kingston \202 de: %02i.                                                                      %c", 186, pro4, 186);
													printf("%c                                       Confira o relat\242rio de estoque para mais informa\207\744es.                                                                          %c", 186, 186);

													printf("%c %*c", 186, tamTela, 186);

													// margem inferior
													printf("%c", 200);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c\n", 188);
												}
											} while (qtdePro4 > pro4);

											valTot = (568.90 * qtdePro4) + 28.43;
											pro4 = pro4 - qtdePro4;

											while (valTot > 0)
											{
												// margem superior
												printf("\n%c", 201);
												for (int i = 0; i < tamTela; i++)
												{
													printf("%c", 205);
												}
												printf("%c", 187);

												printf("%c %*c", 186, tamTela, 186);

												printf("%c                                       Voc\210 precisa pagar R$ %10.2f                                                                                               %c", 186, valTot, 186);

												printf("%c %*c", 186, tamTela, 186);

												// margem inferior
												printf("%c", 200);
												for (int i = 0; i < tamTela; i++)
												{
													printf("%c", 205);
												}
												printf("%c\n", 188);

												printf("\n\t\t\t\tDeposite seu dinheiro: R$ ");
												fflush(stdin);
												scanf("%f", &valPagar);

												if (valPagar > valTot)
												{
													valTroco = valPagar - valTot;
													valTot = valTot - (valPagar - valTroco);

													// margem superior
													printf("\n%c", 201);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c", 187);

													printf("%c %*c", 186, tamTela, 186);

													printf("%c                                       Voc\210 pagou com um valor mais do que suficiente, aqui est\240 seu troco: R$ %10.2f                                             %c", 186, valTroco, 186);

													printf("%c %*c", 186, tamTela, 186);

													// margem inferior
													printf("%c", 200);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c\n", 188);
													break;
												}
												else
												{
													valTot = valTot - valPagar;
												}
											}

											// margem superior
											printf("%c", 201);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c", 187);

											printf("%c %*c", 186, tamTela, 186);

											printf("%c                                       Agradecemos pela sua compra! :D                                                                                                %c", 186, 186);
											printf("%c                                       Enviaremos o seu pedido o mais r\240pido poss\641vel!                                                                                %c", 186, 186);
											vendaPro4++;

											printf("%c %*c", 186, tamTela, 186);

											// linha superior
											printf("%c                                               ", 186);
											printf("%c", 201);
											for (int i = 0; i < tamLin; i++)
											{
												printf("%c", 205);
											}
											printf("%c                                                                   %c", 187, 186);

											// linhas laterais e conteudo
											printf("%c                                               ", 186);
											printf("%c", 186);
											printf("%-*s", tamLin, "                  Menu de Compra");
											printf("%c                                                                   %c", 186, 186);

											// linha horizontal
											printf("%c                                               ", 186);
											printf("%c", 204);
											for (int i = 0; i < tamLin; i++)
											{
												printf("%c", 205);
											}
											printf("%c                                                                   %c", 185, 186);

											// linhas laterais e conteudo
											printf("%c                                               ", 186);
											printf("%c", 186);
											printf("%-*s", tamLin, "1 - Comprar novamente");
											printf("%c                                                                   %c", 186, 186);

											printf("%c                                               ", 186);
											printf("%c", 186);
											printf("%-*s", tamLin, "2 - Voltar");
											printf("%c                                                                   %c", 186, 186);

											// linha inferior
											printf("%c                                               ", 186);
											printf("%c", 200);
											for (int i = 0; i < tamLin; i++)
											{
												printf("%c", 205);
											}
											printf("%c                                                                   %c", 188, 186);

											printf("%c %*c", 186, tamTela, 186);

											// margem inferior
											printf("%c", 200);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c\n", 188);

											printf("\n\t\t\t\tO que deseja fazer: ");
											fflush(stdin);
											scanf("%c", &menuPro);

											system("cls");

											break;
										}
										else if (quest == 'N' || quest == 'n')
										{
											printf("\n");
											break;
										}
										else
										{
											// margem superior
											printf("\n%c", 201);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c", 187);

											printf("%c %*c", 186, tamTela, 186);

											printf("%c                                       Op\207\706o inv\240lida.                                                                                                                %c", 186, 186);

											printf("%c %*c", 186, tamTela, 186);

											// margem inferior
											printf("%c", 200);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c\n", 188);

											system("pause");
											system("cls");
										}
									}
									else
									{
										// margem superior
										printf("%c", 201);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c", 187);

										printf("%c %*c", 186, tamTela, 186);

										printf("%c                                       Infelizmente n\706o temos o produto SSD 480GB A400 Kingston no nosso estoque.                                                     %c", 186, 186);
										printf("%c                                       Confira o relat\242rio de estoque para mais informa\207\744es.                                                                          %c", 186, 186);

										printf("%c %*c", 186, tamTela, 186);

										// margem inferior
										printf("%c", 200);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c\n", 188);

										system("pause");
										system("cls");
										break;
									}
								}
							}
							else if (menuPro != '1' && menuPro != '2')
							{
								// margem superior
								printf("%c", 201);
								for (int i = 0; i < tamTela; i++)
								{
									printf("%c", 205);
								}
								printf("%c", 187);

								printf("%c %*c", 186, tamTela, 186);

								printf("%c                                       Op\207\706o inv\240lida.                                                                                                                %c", 186, 186);

								printf("%c %*c", 186, tamTela, 186);

								// margem inferior
								printf("%c", 200);
								for (int i = 0; i < tamTela; i++)
								{
									printf("%c", 205);
								}
								printf("%c\n", 188);

								system("pause");
								system("cls");
							}
						} while (menuPro != '2');
						break;
					case '5':
						do
						{
							// margem superior
							printf("%c", 201);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c", 187);

							printf("%c %*c", 186, tamTela, 186);

							printf("%c                                               Nome: Teclado Mec\203nico Horus TKL K622 Redragon                                                                         %c", 186, 186);
							printf("%c                                               Informa\207\744es T\202cnicas:                                                                                                  %c", 186, 186);
							printf("%c %*c", 186, tamTela, 186);
							printf("%c                                               Especifica\207\744es:                                                                                                        %c", 186, 186);
							printf("%c                                               -Switch: brown                                                                                                         %c", 186, 186);
							printf("%c                                               -Hotswap DIY                                                                                                           %c", 186, 186);
							printf("%c                                               -Cor: Preto                                                                                                            %c", 186, 186);
							printf("%c                                               -Formato: TKL                                                                                                          %c", 186, 186);
							printf("%c                                               -Layout: abnt2                                                                                                         %c", 186, 186);
							printf("%c                                               -Altura ajust\240vel                                                                                                      %c", 186, 186);
							printf("%c                                               -Conectividade: USB 2.0                                                                                                %c", 186, 186);
							printf("%c                                               -Comprimento do cabo: 1.5m                                                                                             %c", 186, 186);
							printf("%c                                               -RGB                                                                                                                   %c", 186, 186);
							printf("%c                                               -Dimens\744es da embalagem: 370 x 195 x 35 mm                                                                             %c", 186, 186);
							printf("%c %*c", 186, tamTela, 186);
							printf("%c                                               Caracter\641sticas:                                                                                                       %c", 186, 186);
							printf("%c                                               -Marca: Redragon                                                                                                       %c", 186, 186);
							printf("%c                                               -Modelo: k622-rgb (pt-brown)                                                                                           %c", 186, 186);

							printf("%c %*c", 186, tamTela, 186);

							// linha superior
							printf("%c                                               ", 186);
							printf("%c", 201);
							for (int i = 0; i < tamLin; i++)
							{
								printf("%c", 205);
							}
							printf("%c                                                                   %c", 187, 186);

							// linhas laterais e conteudo
							printf("%c                                               ", 186);
							printf("%c", 186);
							printf("%-*s", tamLin, "                  Menu de Compra");
							printf("%c                                                                   %c", 186, 186);

							// linha horizontal
							printf("%c                                               ", 186);
							printf("%c", 204);
							for (int i = 0; i < tamLin; i++)
							{
								printf("%c", 205);
							}
							printf("%c                                                                   %c", 185, 186);

							// linhas laterais e conteudo
							printf("%c                                               ", 186);
							printf("%c", 186);
							printf("%-*s", tamLin, "1 - Comprar agora");
							printf("%c                                                                   %c", 186, 186);

							printf("%c                                               ", 186);
							printf("%c", 186);
							printf("%-*s", tamLin, "2 - Voltar");
							printf("%c                                                                   %c", 186, 186);

							// linha inferior
							printf("%c                                               ", 186);
							printf("%c", 200);
							for (int i = 0; i < tamLin; i++)
							{
								printf("%c", 205);
							}
							printf("%c                                                                   %c", 188, 186);

							printf("%c %*c", 186, tamTela, 186);

							// margem inferior
							printf("%c", 200);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c\n", 188);

							printf("\n\t\t\t\tO que deseja fazer: ");
							fflush(stdin);
							scanf("%c", &menuPro);

							system("cls");

							if (menuPro == '1')
							{
								while (quest != 'S' || quest != 's' || quest != 'N' || quest != 'n')
								{
									if (pro5 > 0)
									{
										// margem superior
										printf("%c", 201);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c", 187);

										printf("%c %*c", 186, tamTela, 186);

										printf("%c                                       Nome: Teclado Mec\203nico Horus TKL K622 Redragon                                                                                 %c", 186, 186);
										printf("%c                                       Pre\207o: R$ 326,40                                                                                                               %c", 186, 186);
										printf("%c                                       Frete: R$ 16,32                                                                                                                %c", 186, 186);

										printf("%c %*c", 186, tamTela, 186);

										// margem inferior
										printf("%c", 200);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c\n", 188);

										printf("\n\t\t\t\tTem certeza que voce quer realizar esta compra? S/N: ");
										fflush(stdin);
										scanf("%c", &quest);

										if (quest == 'S' || quest == 's')
										{
											do
											{
												printf("\n\t\t\t\tQual a quantidade do produto Teclado Mec\203nico Horus TKL K622 Redragon voc\210 deseja comprar: ");
												fflush(stdin);
												scanf("%i", &qtdePro5);

												if (qtdePro5 > pro5)
												{
													// margem superior
													printf("\n%c", 201);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c", 187);

													printf("%c %*c", 186, tamTela, 186);

													printf("%c                                       N\706o temos a quantidade de produtos selecionada.                                                                                %c", 186, 186);
													printf("%c                                       A quantidade do produto Teclado Mec\203nico Horus TKL K622 Redragon \202 de: %02i.                                                     %c", 186, pro5, 186);
													printf("%c                                       Confira o relat\242rio de estoque para mais informa\207\744es.                                                                          %c", 186, 186);

													printf("%c %*c", 186, tamTela, 186);

													// margem inferior
													printf("%c", 200);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c\n", 188);
												}
											} while (qtdePro5 > pro5);

											valTot = (326.40 * qtdePro5) + 16.32;
											pro5 = pro5 - qtdePro5;

											while (valTot > 0)
											{
												// margem superior
												printf("\n%c", 201);
												for (int i = 0; i < tamTela; i++)
												{
													printf("%c", 205);
												}
												printf("%c", 187);

												printf("%c %*c", 186, tamTela, 186);

												printf("%c                                       Voc\210 precisa pagar R$ %10.2f                                                                                               %c", 186, valTot, 186);

												printf("%c %*c", 186, tamTela, 186);

												// margem inferior
												printf("%c", 200);
												for (int i = 0; i < tamTela; i++)
												{
													printf("%c", 205);
												}
												printf("%c\n", 188);

												printf("\n\t\t\t\tDeposite seu dinheiro: R$ ");
												fflush(stdin);
												scanf("%f", &valPagar);

												if (valPagar > valTot)
												{
													valTroco = valPagar - valTot;
													valTot = valTot - (valPagar - valTroco);

													// margem superior
													printf("\n%c", 201);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c", 187);

													printf("%c %*c", 186, tamTela, 186);

													printf("%c                                       Voc\210 pagou com um valor mais do que suficiente, aqui est\240 seu troco: R$ %10.2f                                             %c", 186, valTroco, 186);

													printf("%c %*c", 186, tamTela, 186);

													// margem inferior
													printf("%c", 200);
													for (int i = 0; i < tamTela; i++)
													{
														printf("%c", 205);
													}
													printf("%c\n", 188);
													break;
												}
												else
												{
													valTot = valTot - valPagar;
												}
											}

											// margem superior
											printf("%c", 201);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c", 187);

											printf("%c %*c", 186, tamTela, 186);

											printf("%c                                       Agradecemos pela sua compra! :D                                                                                                %c", 186, 186);
											printf("%c                                       Enviaremos o seu pedido o mais r\240pido poss\641vel!                                                                                %c", 186, 186);
											vendaPro5++;

											printf("%c %*c", 186, tamTela, 186);

											// linha superior
											printf("%c                                               ", 186);
											printf("%c", 201);
											for (int i = 0; i < tamLin; i++)
											{
												printf("%c", 205);
											}
											printf("%c                                                                   %c", 187, 186);

											// linhas laterais e conteudo
											printf("%c                                               ", 186);
											printf("%c", 186);
											printf("%-*s", tamLin, "                  Menu de Compra");
											printf("%c                                                                   %c", 186, 186);

											// linha horizontal
											printf("%c                                               ", 186);
											printf("%c", 204);
											for (int i = 0; i < tamLin; i++)
											{
												printf("%c", 205);
											}
											printf("%c                                                                   %c", 185, 186);

											// linhas laterais e conteudo
											printf("%c                                               ", 186);
											printf("%c", 186);
											printf("%-*s", tamLin, "1 - Comprar novamente");
											printf("%c                                                                   %c", 186, 186);

											printf("%c                                               ", 186);
											printf("%c", 186);
											printf("%-*s", tamLin, "2 - Voltar");
											printf("%c                                                                   %c", 186, 186);

											// linha inferior
											printf("%c                                               ", 186);
											printf("%c", 200);
											for (int i = 0; i < tamLin; i++)
											{
												printf("%c", 205);
											}
											printf("%c                                                                   %c", 188, 186);

											printf("%c %*c", 186, tamTela, 186);

											// margem inferior
											printf("%c", 200);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c\n", 188);

											printf("\n\t\t\t\tO que deseja fazer: ");
											fflush(stdin);
											scanf("%c", &menuPro);

											system("cls");

											break;
										}
										else if (quest == 'N' || quest == 'n')
										{
											printf("\n");
											break;
										}
										else
										{
											// margem superior
											printf("\n%c", 201);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c", 187);

											printf("%c %*c", 186, tamTela, 186);

											printf("%c                                       Op\207\706o inv\240lida.                                                                                                                %c", 186, 186);

											printf("%c %*c", 186, tamTela, 186);

											// margem inferior
											printf("%c", 200);
											for (int i = 0; i < tamTela; i++)
											{
												printf("%c", 205);
											}
											printf("%c\n", 188);

											system("pause");
											system("cls");
										}
									}
									else
									{
										// margem superior
										printf("%c", 201);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c", 187);

										printf("%c %*c", 186, tamTela, 186);

										printf("%c                                       Infelizmente n\706o temos o produto Teclado Mec\203nico Horus TKL K622 Redragon no nosso estoque.                                                  %c", 186, 186);
										printf("%c                                       Confira o relat\242rio de estoque para mais informa\207\744es.                                                                          %c", 186, 186);

										printf("%c %*c", 186, tamTela, 186);

										// margem inferior
										printf("%c", 200);
										for (int i = 0; i < tamTela; i++)
										{
											printf("%c", 205);
										}
										printf("%c\n", 188);

										system("pause");
										system("cls");
										break;
									}
								}
							}
							else if (menuPro != '1' && menuPro != '2')
							{
								// margem superior
								printf("%c", 201);
								for (int i = 0; i < tamTela; i++)
								{
									printf("%c", 205);
								}
								printf("%c", 187);

								printf("%c %*c", 186, tamTela, 186);

								printf("%c                                       Op\207\706o inv\240lida.                                                                                                                %c", 186, 186);

								printf("%c %*c", 186, tamTela, 186);

								// margem inferior
								printf("%c", 200);
								for (int i = 0; i < tamTela; i++)
								{
									printf("%c", 205);
								}
								printf("%c\n", 188);

								system("pause");
								system("cls");
							}
						} while (menuPro != '2');
						break;
					default:
						if (menuSell != '6')
						{
							// margem superior
							printf("%c", 201);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c", 187);

							printf("%c %*c", 186, tamTela, 186);

							printf("%c                                       Op\207\706o inv\240lida.                                                                                                                %c", 186, 186);

							printf("%c %*c", 186, tamTela, 186);

							// margem inferior
							printf("%c", 200);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c\n", 188);

							system("pause");
							system("cls");
						}
					}
				} while (menuSell != '6');
			}
			else
			{
				// margem superior
				printf("%c", 201);
				for (int i = 0; i < tamTela; i++)
				{
					printf("%c", 205);
				}
				printf("%c", 187);

				printf("%c %*c", 186, tamTela, 186);

				printf("%c                                       Voc\210 ainda n\706o \202 cadastrado no nosso sistema.                                                                                  %c", 186, 186);
				printf("%c                                       Por favor, fa\207a o cadastro para realizar suas compras.                                                                         %c", 186, 186);

				printf("%c %*c", 186, tamTela, 186);

				// margem inferior
				printf("%c", 200);
				for (int i = 0; i < tamTela; i++)
				{
					printf("%c", 205);
				}
				printf("%c\n", 188);

				system("pause");
				system("cls");
			}
			break;
		case '3':
			if (user != '0' && senha != 0) // necessário cadastro para acessar.
			{
				while ((userLogin != user && senhaLogin != senha) || (userLogin != user) || (senhaLogin != senha)) // necessário fazer login pelo menos 1 vez para acessar.
				{
					// margem superior
					printf("%c", 201);
					for (int i = 0; i < tamTela; i++)
					{
						printf("%c", 205);
					}
					printf("%c", 187);

					printf("%c %*c", 186, tamTela, 186);

					printf("%c                                       Fa\207a login com seu usu\240rio e senha.                                                                                            %c", 186, 186);

					printf("%c %*c", 186, tamTela, 186);

					// margem inferior
					printf("%c", 200);
					for (int i = 0; i < tamTela; i++)
					{
						printf("%c", 205);
					}
					printf("%c\n", 188);

					while (!isalpha(userLogin))
					{
						printf("\n\t\t\t\tUsu\240rio: ");
						fflush(stdin);
						scanf("%c", &userLogin);
						if (!isalpha(userLogin))
						{
							// margem superior
							printf("\n%c", 201);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c", 187);

							printf("%c %*c", 186, tamTela, 186);

							printf("%c                                       Usu\240rio inv\240lido.                                                                                                              %c", 186, 186);

							printf("%c %*c", 186, tamTela, 186);

							// margem inferior
							printf("%c", 200);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c\n", 188);
						}
					}
					while (senhaLogin <= 0)
					{
						printf("\n\t\t\t\tSenha: ");
						fflush(stdin);
						scanf("%i", &senhaLogin);
						if (senhaLogin <= 0)
						{
							// margem superior
							printf("\n%c", 201);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c", 187);

							printf("%c %*c", 186, tamTela, 186);

							printf("%c                                       Senha inv\240lida.                                                                                                                %c", 186, 186);

							printf("%c %*c", 186, tamTela, 186);

							// margem inferior
							printf("%c", 200);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c\n", 188);
						}
					}

					if ((userLogin != user && senhaLogin != senha) || (userLogin != user) || (senhaLogin != senha))
					{
						// margem superior
						printf("\n%c", 201);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c", 187);

						printf("%c %*c", 186, tamTela, 186);

						printf("%c                                       Usu\240rio ou senha inv\240lidos.                                                                                                    %c", 186, 186);
						senhaLogin = 0;
						userLogin = '0';

						printf("%c %*c", 186, tamTela, 186);

						// margem inferior
						printf("%c", 200);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c\n", 188);

						system("pause");
						system("cls");
					}
					else
					{
						// margem superior
						printf("\n%c", 201);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c", 187);

						printf("%c %*c", 186, tamTela, 186);

						printf("%c                                       Voc\210 fez login com sucesso!                                                                                                    %c", 186, 186);

						printf("%c %*c", 186, tamTela, 186);

						// margem inferior
						printf("%c", 200);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c\n", 188);

						system("pause");
						system("cls");
					}
				}
				do
				{
					// margem superior
					printf("%c", 201);
					for (int i = 0; i < tamTela; i++)
					{
						printf("%c", 205);
					}
					printf("%c", 187);

					printf("%c %*c", 186, tamTela, 186);

					printf("%c                                       Aqui voc\210 ver\240 a disponibilidade de produtos no nosso estoque, al\210m de saber informac\744es sobre                                 %c", 186, 186);
					printf("%c                                       os produtos, como por exemplo, quantos foram vendidos.                                                                         %c", 186, 186);

					printf("%c %*c", 186, tamTela, 186);

					// linha superior
					printf("%c                                               %c", 186, 201);
					for (int i = 0; i < tamLin; i++)
					{
						printf("%c", 205);
					}
					printf("%c                                                                   %c", 187, 186);

					// linhas laterais e conteudo
					printf("%c                                               %c", 186, 186);
					printf("%-*s", tamLin, "               Produtos no Cat\240logo");
					printf("%c                                                                   %c", 186, 186);

					// linha horizontal
					printf("%c                                               %c", 186, 204);
					for (int i = 0; i < tamLin; i++)
					{
						printf("%c", 205);
					}
					printf("%c                                                                   %c", 185, 186);

					// linhas laterais e conteudo
					printf("%c                                               %c", 186, 186);
					printf("%-*s", tamLin, "1 - Console Playstation 5 Sony");
					printf("%c                                                                   %c", 186, 186);

					printf("%c                                               %c", 186, 186);
					printf("%-*s", tamLin, "2 - Mem\242ria RAM 16GB Fury Beast Kingston");
					printf("%c                                                                   %c", 186, 186);

					printf("%c                                               %c", 186, 186);
					printf("%-*s", tamLin, "3 - Monitor Gamer T350 Samsung");
					printf("%c                                                                   %c", 186, 186);

					printf("%c                                               %c", 186, 186);
					printf("%-*s", tamLin, "4 - SSD 480GB A400 Kingston");
					printf("%c                                                                   %c", 186, 186);

					printf("%c                                               %c", 186, 186);
					printf("%-*s", tamLin, "5 - Teclado Mec\203nico Horus TKL K622 Redragon");
					printf("%c                                                                   %c", 186, 186);

					printf("%c                                               %c", 186, 186);
					printf("%-*s", tamLin, "6 - Voltar");
					printf("%c                                                                   %c", 186, 186);

					// linha inferior
					printf("%c                                               %c", 186, 200);
					for (int i = 0; i < tamLin; i++)
					{
						printf("%c", 205);
					}
					printf("%c                                                                   %c", 188, 186);

					printf("%c %*c", 186, tamTela, 186);

					// margem inferior
					printf("%c", 200);
					for (int i = 0; i < tamTela; i++)
					{
						printf("%c", 205);
					}
					printf("%c\n", 188);

					printf("\n\t\t\t\tVer relat\242rio de qual produto: ");
					fflush(stdin);
					scanf("%c", &menuRel);

					system("cls");

					switch (menuRel)
					{
					case '1':
						// margem superior
						printf("%c", 201);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c", 187);

						printf("%c %*c", 186, tamTela, 186);

						printf("%c                                       Nome: Console Playstation 5 Sony                                                                                               %c", 186, 186);
						printf("%c                                       Console Playstation 5 Sony em estoque: %02i.                                                                                     %c", 186, pro1, 186);
						printf("%c                                       N\243mero de vendas de Console Playstation 5: %02i.                                                                                 %c", 186, vendaPro1 + 10, 186);
						printf("%c %*c", 186, tamTela, 186);
						printf("%c                                       Obs: O n\243mero de avendas n\706o condiz com a quantidade comprada.                                                                 %c", 186, 186);
						printf("%c                                       Ou seja, n\706o importa a quantidade de produtos comprada, essa foi uma venda.                                                    %c", 186, 186);

						printf("%c %*c", 186, tamTela, 186);

						// margem inferior
						printf("%c", 200);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c\n", 188);

						system("pause");
						system("cls");
						break;
					case '2':
						// margem superior
						printf("%c", 201);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c", 187);

						printf("%c %*c", 186, tamTela, 186);

						printf("%c                                       Nome: Mem\242ria RAM 16GB Fury Beast Kingston                                                                                     %c", 186, 186);
						printf("%c                                       Mem\242ria RAM 16GB Fury Beast Kingston em estoque: %02i.                                                                           %c", 186, pro2, 186);
						printf("%c                                       N\243mero de vendas de Mem\242ria RAM 16GB Fury Beast Kingston: %02i.                                                                  %c", 186, vendaPro2 + 15, 186);
						printf("%c %*c", 186, tamTela, 186);
						printf("%c                                       Obs: O n\243mero de avendas n\706o condiz com a quantidade comprada.                                                                 %c", 186, 186);
						printf("%c                                       Ou seja, n\706o importa a quantidade de produtos comprada, essa foi uma venda.                                                    %c", 186, 186);

						printf("%c %*c", 186, tamTela, 186);

						// margem inferior
						printf("%c", 200);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c\n", 188);

						system("pause");
						system("cls");
						break;
					case '3':
						// margem superior
						printf("%c", 201);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c", 187);

						printf("%c %*c", 186, tamTela, 186);

						printf("%c                                       Nome: Monitor Gamer Samsung T350                                                                                               %c", 186, 186);
						printf("%c                                       Monitor Gamer Samsung T350 em estoque: %02i.                                                                                     %c", 186, pro3, 186);
						printf("%c                                       N\243mero de vendas de Monitor Gamer Samsung T350: %02i.                                                                            %c", 186, vendaPro3 + 11, 186);
						printf("%c %*c", 186, tamTela, 186);
						printf("%c                                       Obs: O n\243mero de avendas n\706o condiz com a quantidade comprada.                                                                 %c", 186, 186);
						printf("%c                                       Ou seja, n\706o importa a quantidade de produtos comprada, essa foi uma venda.                                                    %c", 186, 186);

						printf("%c %*c", 186, tamTela, 186);

						// margem inferior
						printf("%c", 200);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c\n", 188);

						system("pause");
						system("cls");
						break;
					case '4':
						// margem superior
						printf("%c", 201);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c", 187);

						printf("%c %*c", 186, tamTela, 186);

						printf("%c                                       Nome: SSD 480GB A400 Kingston                                                                                                  %c", 186, 186);
						printf("%c                                       SSD 480GB A400 Kingston em estoque: %02i.                                                                                        %c", 186, pro4, 186);
						printf("%c                                       N\243mero de vendas de SSD 480GB A400 Kingston: %02i.                                                                               %c", 186, vendaPro4 + 16, 186);
						printf("%c %*c", 186, tamTela, 186);
						printf("%c                                       Obs: O n\243mero de avendas n\706o condiz com a quantidade comprada.                                                                 %c", 186, 186);
						printf("%c                                       Ou seja, n\706o importa a quantidade de produtos comprada, essa foi uma venda.                                                    %c", 186, 186);

						printf("%c %*c", 186, tamTela, 186);

						// margem inferior
						printf("%c", 200);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c\n", 188);

						system("pause");
						system("cls");
						break;
					case '5':
						// margem superior
						printf("%c", 201);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c", 187);

						printf("%c %*c", 186, tamTela, 186);

						printf("%c                                       Nome: Teclado Mec\203nico Horus TKL K622 Redragon                                                                                 %c", 186, 186);
						printf("%c                                       Teclado Mec\203nico Horus TKL K622 Redragon em estoque: %02i.                                                                       %c", 186, pro5, 186);
						printf("%c                                       N\243mero de vendas de Teclado Mec\203nico Horus TKL K622 Redragon: %02i.                                                              %c", 186, vendaPro5 + 13, 186);
						printf("%c %*c", 186, tamTela, 186);
						printf("%c                                       Obs: O n\243mero de avendas n\706o condiz com a quantidade comprada.                                                                 %c", 186, 186);
						printf("%c                                       Ou seja, n\706o importa a quantidade de produtos comprada, essa foi uma venda.                                                    %c", 186, 186);

						printf("%c %*c", 186, tamTela, 186);

						// margem inferior
						printf("%c", 200);
						for (int i = 0; i < tamTela; i++)
						{
							printf("%c", 205);
						}
						printf("%c\n", 188);

						system("pause");
						system("cls");
						break;
					default:
						if (menuRel != '6')
						{
							// margem superior
							printf("%c", 201);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c", 187);

							printf("%c %*c", 186, tamTela, 186);

							printf("%c                                       Op\207\706o inv\240lida.                                                                                                                %c", 186, 186);

							printf("%c %*c", 186, tamTela, 186);

							// margem inferior
							printf("%c", 200);
							for (int i = 0; i < tamTela; i++)
							{
								printf("%c", 205);
							}
							printf("%c\n", 188);

							system("pause");
							system("cls");
						}
					}
				} while (menuRel != '6');
			}
			else
			{
				// margem superior
				printf("%c", 201);
				for (int i = 0; i < tamTela; i++)
				{
					printf("%c", 205);
				}
				printf("%c", 187);

				printf("%c %*c", 186, tamTela, 186);

				printf("%c                                       Voc\210 ainda n\706o \202 cadastrado no nosso sistema.                                                                                  %c", 186, 186);
				printf("%c                                       Por favor fa\207a o cadastro para realizar suas compras.                                                                          %c", 186, 186);

				printf("%c %*c", 186, tamTela, 186);

				// margem inferior
				printf("%c", 200);
				for (int i = 0; i < tamTela; i++)
				{
					printf("%c", 205);
				}
				printf("%c\n", 188);

				system("pause");
				system("cls");
			}
			break;
		default:
			if (menu != '4')
			{
				// margem superior
				printf("%c", 201);
				for (int i = 0; i < tamTela; i++)
				{
					printf("%c", 205);
				}
				printf("%c", 187);

				printf("%c %*c", 186, tamTela, 186);

				printf("%c                                       Op\207\706o inv\240lida.                                                                                                                %c", 186, 186);

				printf("%c %*c", 186, tamTela, 186);

				// margem inferior
				printf("%c", 200);
				for (int i = 0; i < tamTela; i++)
				{
					printf("%c", 205);
				}
				printf("%c\n", 188);

				system("pause");
				system("cls");
			}
		}
	} while (menu != '4');

	// margem superior
	printf("%c", 201);
	for (int i = 0; i < tamTela; i++)
	{
		printf("%c", 205);
	}
	printf("%c", 187);

	printf("%c %*c", 186, tamTela, 186);

	printf("%c                                       Voc\210 saiu do sistema da MegaBit Store. Obrigado pela visita! :D                                                                %c", 186, 186);

	printf("%c %*c", 186, tamTela, 186);

	// margem inferior
	printf("%c", 200);
	for (int i = 0; i < tamTela; i++)
	{
		printf("%c", 205);
	}
	printf("%c\n", 188);
}
