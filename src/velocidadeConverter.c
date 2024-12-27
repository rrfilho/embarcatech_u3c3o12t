#include <stdlib.h>
#include <stdio.h>

char* velocidadeConvert(int choice, float value) {
	static char result[128];
	switch(choice) {
		case 1: snprintf(result, 128, "%.2f km/h são %.2f m/s ", value, value / 3.6); break;
		case 2: snprintf(result, 128, "%.2f km/h são %.2f mph", value, value / 1.609); break;
		case 3: snprintf(result, 128, "%.2f m/s  são %.2f km/h", value, value * 3.6); break;
		case 4: snprintf(result, 128, "%.2f m/s  são %.2f mph", value, value * 2.23); break;
		case 5: snprintf(result, 128, "%.2f mph são %.2f km/h", value, value * 1.609); break;
		case 6: snprintf(result, 128, "%.2f mph são %.2f m/s ", value, value / 2.23); break;
	}
	return result;
}

void getVelocidadeConverter() {
	unsigned int choice;
	float value;
	system("cls");
	printf("##################################################\n");
	printf("#               Conversor de medidas             #\n");
	printf("#                                                #\n");
	printf("#  1 - Quilômetro por Hora -> Metro Por Segundo  #\n");
	printf("#  2 - Quilômetro por Hora-> Milha Por Hora      #\n");
	printf("#  3 - Metro Por Segundo  -> Quilômetro por Hora #\n");
	printf("#  4 - Metro Por Segundo  -> Milha Por Hora      #\n");
	printf("#  5 - Milha Por Hora  -> Quilômetro por Hora    #\n");
	printf("#  6 - Milha Por Hora  -> Metro Por Segundo      #\n");
	printf("#                                                #\n");
	printf("   Escolha o tipo de conversão: ");
	scanf("%u", &choice);
	printf("\n   Informe a medida: ");
	scanf("%f", &value);
	if (choice < 1 || choice > 6 || value <= 0) {
		printf("Opção ou medida inválidos.\n");
	} 
	else {
		printf("%s\n", velocidadeConvert(choice, value));
	}
	system("PAUSE");
}