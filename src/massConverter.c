#include <stdlib.h>
#include <stdio.h>

char* massConvert(int choice, float value) {
	static char result[128];
	switch(choice) {
		case 1: snprintf(result, 128, "%.4f gramas são %.4f quilogramas", value, value * 0.001); break;
		case 2: snprintf(result, 128, "%.4f gramas são %.4f toneladas", value, value * 0.000001); break;
		case 3: snprintf(result, 128, "%.4f quilogramas são %.4f gramas", value, value * 1000); break;
		case 4: snprintf(result, 128, "%.4f quilogramas são %.4f toneladas", value, value * 0.001); break;
		case 5: snprintf(result, 128, "%.4f toneladas são %.4f gramas", value, value * 1000000); break;
		case 6: snprintf(result, 128, "%.4f toneladas são %.4f quilogramas", value, value * 1000); break;
	}
	return result;
}

void getMassConverter() {
	unsigned int choice;
	float value;
	system("cls");
	printf("########################################\n");
	printf("#         Conversor de medidas         #\n");
	printf("#                                      #\n");
	printf("#  1 - Grama -> Quilograma             #\n");
	printf("#  2 - Grama -> Tonelada               #\n");
	printf("#  3 - Quilograma -> Grama             #\n");
	printf("#  4 - Quilograma -> Tonelada          #\n");
	printf("#  5 - Tonelada -> Grama               #\n");
	printf("#  6 - Tonelada -> Quilograma          #\n");
	printf("#                                      #\n");
	printf("   Escolha o tipo de conversão: ");
	scanf("%u", &choice);
	printf("\n   Informe a medida: ");
	scanf("%f", &value);
	if (choice < 1 || choice > 6 || value <= 0) {
		printf("Opção ou medida inválidos.\n");
	} 
	else {
		printf("%s\n", massConvert(choice, value));
	}
	system("PAUSE");
}