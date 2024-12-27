#include <stdlib.h>
#include <stdio.h>

char* convertData(int choice, float value) {
    static char result[128];
    switch(choice) {
        case 1: snprintf(result, 128, "%.2f bits são %.2f bytes", value, value / 8); break;
        case 2: snprintf(result, 128, "%.2f bytes são %.2f kilobytes", value, value / 1024); break;
        case 3: snprintf(result, 128, "%.2f kilobytes são %.2f megabytes", value, value / 1024); break;
        default: snprintf(result, 128, "Opção inválida!");
    }
    return result;
}

void getDataConverter() {
    unsigned int choice;
    float value;
    system("cls");
    printf("########################################\n");
    printf("#         Conversor de Dados           #\n");
    printf("#                                      #\n");
    printf("#  1 - Bits -> Bytes                   #\n");
    printf("#  2 - Bytes -> Kilobytes              #\n");
    printf("#  3 - Kilobytes -> Megabytes          #\n");
    printf("#                                      #\n");
    printf("   Escolha o tipo de conversão: ");
    scanf("%u", &choice);
    printf("\n   Informe o valor: ");
    scanf("%f", &value);

    if (value <= 0) {
        printf("Valor inválido.\n");
    } else {
        printf("%s\n", convertData(choice, value));
    }
    system("PAUSE");
}
