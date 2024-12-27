#include <stdlib.h>
#include <stdio.h>

char* convertTemp(int choice, float value) {
	static char result[128];
	switch(choice) {
		case 1: snprintf(result, 128, "%.2f Celsius são %.2f Kelvin", value, value + 273.15); break;
		case 2: snprintf(result, 128, "%.2f Celsius são %.2f Fahrenheit", value, value * 9/5 + 32); break;
		case 3: snprintf(result, 128, "%.2f Kelvin são %.2f Celsius", value, value - 273.15); break;
		case 4: snprintf(result, 128, "%.2f Kelvin são %.2f Fahrenheit", value, (value - 273.15) * 9/5 + 32); break;
		case 5: snprintf(result, 128, "%.2f Fahrenheit são %.2f Celsius", value, (value  - 32) * 5/9); break;
		case 6: snprintf(result, 128, "%.2f Fahrenheit são %.2f Kelvin", value, ((value - 32) * 5/9) + 273.15); break;
	}
	return result;
}

void conversorDeTemperatura() {
	unsigned int choice;
	float value;
	system("cls");
	printf("########################################\n");
	printf("#         Conversor de medidas         #\n");
	printf("#                                      #\n");
	printf("#  1 - Celsius -> Kelvin               #\n");
	printf("#  2 - Celsius -> Fahrenheit           #\n");
	printf("#  3 - Kelvin -> Celsius               #\n");
	printf("#  4 - Kelvin -> Fahrenheit            #\n");
	printf("#  5 - Fahrenheit -> Celsius           #\n");
	printf("#  6 - Fahrenheit -> Kelvin            #\n");
	printf("#                                      #\n");
	printf("   Escolha o tipo de conversão: ");
	scanf("%u", &choice);
	printf("\n   Informe a medida: ");
	scanf("%f", &value);
	if (choice < 1 || choice > 6) {
		printf("Opção ou medida inválidos.\n");
	} 
	else {
		printf("%s\n", convertTemp(choice, value));
	}
	system("PAUSE");
}