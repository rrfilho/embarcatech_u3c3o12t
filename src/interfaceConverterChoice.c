#include <stdlib.h>
#include <stdio.h>

unsigned int getConverter() {
	unsigned int choice;
	system("chcp 65001");
	system("cls");
	printf("########################################\n");
	printf("#         Conversor de medidas         #\n");
	printf("#                                      #\n");
	printf("#  1 - Comprimento                     #\n");
	printf("#  2 - Massa                           #\n");
	printf("#  3 - Volume                          #\n");
	printf("#  4 - Temperatura                     #\n");
	printf("#  5 - Velocidade                      #\n");
	printf("#  5 - Potência                        #\n");
	printf("#  7 - Área                            #\n");
	printf("#  8 - Tempo                           #\n");
	printf("#  9 - Dados                           #\n");
	printf("#  0 - Sair                            #\n");
	printf("#                                      #\n");
	printf("   Escolha o tipo de conversão: ");
	scanf("%u", &choice);
	return choice;
}