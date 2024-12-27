#include<stdio.h>
#include<stdlib.h>
#include "interfaceConverterChoice.h"
#include "areaConverter.h"
#include "dadosConverter.h"

int main() {
    unsigned int choice = 100;

    while(choice != 0) {
        choice = getConverter();
        switch (choice) {
            case 0: 
                printf("Saindo do programa.\n");
                return 0;
            case 1: 
                getAreaConverter();
                break;
            case 2: 
                getDataConverter();
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                system("PAUSE");
        }
    }
    return 0;
}
