#include <stdlib.h>
#include <stdio.h>

char* potencyConvert(int choice, float value) {
	static char result[128];
	switch(choice) {
		case 1: snprintf(result, 128, "%.2f watts são %.2f kilowatts", value, value * 0.001); break;
		case 2: snprintf(result, 128, "%.2f watts são %.2f HPs", value, value / 745.7); break;
		case 3: snprintf(result, 128, "%.2f kilowatts são %.2f watts", value, value * 1000); break;
		case 4: snprintf(result, 128, "%.2f kilowatts são %.2f HPs", value, value * 1.341); break;
		case 5: snprintf(result, 128, "%.2f HPs são %.2f watts", value, value * 745.7); break;
		case 6: snprintf(result, 128, "%.2f HPs são %.2f kilowatts", value, value / 1.341); break;
	}
	return result;
}

void getPotencyConverter() {
	unsigned int choice;
	float value;
	system("cls");
	printf("########################################\n");
	printf("#         Conversor de medidas         #\n");
	printf("#                                      #\n");
	printf("#  1 - Watt -> Kilowatt                #\n");
	printf("#  2 - Watt -> Horse-Power             #\n");
	printf("#  3 - Kilowatt -> Watt                #\n");
	printf("#  4 - Kilowatt -> Horse-Power         #\n");
	printf("#  5 - Horse-Power -> Watt             #\n");
	printf("#  6 - Horse-Power -> Kilowatt         #\n");
	printf("#                                      #\n");
	printf("   Escolha o tipo de conversão: ");
	scanf("%u", &choice);
	printf("\n   Informe a medida: ");
	scanf("%f", &value);
	if (choice < 1 || choice > 6 || value <= 0) {
		printf("Opção ou medida inválidos.\n");
	} 
	else {
		printf("%s\n", potencyConvert(choice, value));
	}
	system("PAUSE");
}