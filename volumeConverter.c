#include <stdlib.h>
#include <stdio.h>

char* convert(int choice, float value) {
	static char result[128];
	switch(choice) {
		case 1: snprintf(result, 128, "%.2f Litro são %.2f Mililitro", value, value * 1000); break;
		case 2: snprintf(result, 128, "%.2f Litro são %.2f Metro Cubico", value, value / 1000); break;
		case 3: snprintf(result, 128, "%.2f Mililitro são %.2f Litro", value, value / 1000); break;
		case 4: snprintf(result, 128, "%.2f Mililitro são %.2f Metro Cubico", value, value / 1000000); break;
		case 5: snprintf(result, 128, "%.2f Metro Cubico são %.2f Litro", value, value * 1000); break;
		case 6: snprintf(result, 128, "%.2f Metro Cubico são %.2f Mililitro", value, value * 1000000); break;
	}
	return result;
}

void getVolumeConverter() {
	unsigned int choice;
	float value;
	system("cls");
	printf("########################################\n");
	printf("#         Conversor de medidas         #\n");
	printf("#                                      #\n");
	printf("#  1 - Litro -> Mililitro              #\n");
	printf("#  2 - Litro -> Metro Cubico           #\n");
	printf("#  3 - Mililitro -> Litro              #\n");
	printf("#  4 - Mililitro -> Metro Cubico       #\n");
	printf("#  5 - Metro Cubico -> Litro           #\n");
	printf("#  6 - Metro Cubico -> Mililitro       #\n");
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