#include <stdio.h>

void ConversorDeTemperatura () {
int opcao, temperatura;

    printf("Valor: \n");
    printf("[1] Kelvin\n");
    printf("[2] Celsius\n");
    printf("[3] Fahrenheit\n");

    printf("\nDigite o numero da unidade para converter:\n ");
    scanf("%d", &opcao); 

    printf("Digite o valor: ");
    scanf("%f", &temperatura);

    switch(opcao){
        case 1:
            printf("\n# Valor digitado: %.2f K\n", temperatura);
            printf("  - Valor em Celsius: %.2f ºC\n", temperatura - 273.15);
            printf("  - Valor em Fahrenheit: %.2f ºF\n", (temperatura - 273.15) * 9/5 + 32);
            break;
        case 2:
            printf("\n# Valor digitado: %.2f ºC\n", temperatura);
            printf("  - Valor em Kelvin: %.2f K\n", temperatura + 273.15);
            printf("  - Valor em Fahrenheit: %.2f ºF\n", temperatura * 9/5 + 32);
            break;
        case 3:
            printf("\n# Valor digitado: %.2f ºF\n", temperatura);
            printf("  - Valor em Celsius: %.2f ºC\n", (temperatura - 32) * 5/9);
            printf("  - Valor em Kelvin: %.2f K\n", ((temperatura - 32) * 5/9) + 273.15);
            break;
        default:
            printf("Nao existe essa opcao!\n");
            break;
    }
}