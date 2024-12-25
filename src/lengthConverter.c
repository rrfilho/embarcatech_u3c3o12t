// https://mundoeducacao.uol.com.br/matematica/unidades-medida-comprimento.htm

#include <stdlib.h>
#include <stdio.h>

char* convert(int choice, float value) {
	static char result[128];
	switch(choice) {
		case 1: snprintf(result, 128, "%.2f milímetros são %.2f centímetros", value, value * 0.1); break;
		case 2: snprintf(result, 128, "%.2f milímetros são %.2f metros", value, value * 0.001); break;
		case 3: snprintf(result, 128, "%.2f centímetros são %.2f milímetros", value, value * 10); break;
		case 4: snprintf(result, 128, "%.2f centímetros são %.2f metros", value, value * 0.01); break;
		case 5: snprintf(result, 128, "%.2f metros são %.2f milímetros", value, value * 1000); break;
		case 6: snprintf(result, 128, "%.2f metros são %.2f centímetros", value, value * 100); break;
	}
	return result;
}

void getLengthConverter() {
	unsigned int choice;
	float value;
	system("cls");
	printf("########################################\n");
	printf("#         Conversor de medidas         #\n");
	printf("#                                      #\n");
	printf("#  1 - Milímetro -> Centímetro         #\n");
	printf("#  2 - Milímetro -> Metro              #\n");
	printf("#  3 - Centímetro -> Milímetro         #\n");
	printf("#  4 - Centímetro -> Metro             #\n");
	printf("#  5 - Metro -> Milímetro              #\n");
	printf("#  6 - Metro -> Centímetro             #\n");
	printf("#                                      #\n");
	printf("   Escolha o tipo de conversão: ");
	scanf("%u", &choice);
	printf("\n   Informe a medida: ");
	scanf("%f", &value);
	if (choice < 1 || choice > 6 || value <= 0) {
		printf("Opção ou medida inválidos.\n");
	} 
	else {
		printf("%s\n", convert(choice, value));
	}
	system("PAUSE");
}