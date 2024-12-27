#include <stdlib.h>
#include <stdio.h>

char* convertArea(int choice, float value) {
    static char result[128];
    switch(choice) {
        case 1: snprintf(result, 128, "%.2f m² são %.2f cm²", value, value * 10000); break;
        case 2: snprintf(result, 128, "%.2f cm² são %.2f m²", value, value / 10000); break;
        default: snprintf(result, 128, "Opção inválida!");
    }
    return result;
}

void getAreaConverter() {
    unsigned int choice;
    float value;
    system("cls");
    printf("########################################\n");
    printf("#           Conversor de Área          #\n");
    printf("#                                      #\n");
    printf("#  1 - Metros Quadrados -> Cm²         #\n");
    printf("#  2 - Cm² -> Metros Quadrados         #\n");
    printf("#                                      #\n");
    printf("   Escolha o tipo de conversão: ");
    scanf("%u", &choice);
    printf("\n   Informe a área: ");
    scanf("%f", &value);

    if (value <= 0) {
        printf("Medida inválida.\n");
    } else {
        printf("%s\n", convertArea(choice, value));
    }
    system("PAUSE");
}
