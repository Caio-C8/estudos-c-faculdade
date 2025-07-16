#include <stdio.h>

main()
{
	float Vinv, valC, valS, Vgan, Vfin;
	float perC, perS, Vcaiu, Vsubiu;

	printf("Digite o valor investido na bolsa: R$ "); // 1000
	scanf("%f", &Vinv);

	printf("Digite quantos porcento caiu na bolsa: "); // 10
	scanf("%f", &valC);

	printf("Digite quantos porcento subiu na bolsa: "); // 10
	scanf("%f", &valS);

	perC = valC / 100;
	perS = valS / 100;
	Vcaiu = Vinv * perC;			// 100
	Vsubiu = (Vinv - Vcaiu) * perC; // 90
	Vfin = (Vinv - Vcaiu) + Vsubiu;

	printf("O valor perdido com a queda da bolsa foi: R$ %.2f", Vcaiu);
	printf("\nO valor ganho com o aumento da bolsa foi: R$ %.2f", Vsubiu);
	printf("\nO valor ganho, no total, com o investimento foi: R$ %.2f", Vfin);
}
