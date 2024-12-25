#include <stdio.h>
#include "ConversorTemp.h"

void converterVolume(float quantidade, char medida, char newmedida){ //Função Converte Volume
    float resultado;

    if(medida == 'L' && newmedida == 'M'){ // Litro para ML
        resultado = quantidade * 1000;
    }
    else if(medida == 'L' && newmedida == 'C'){ //Litro para Metro Cubico
        resultado = quantidade / 1000;
    }
    else if(medida == 'M' && newmedida == 'L'){ //ML para Litros
        resultado = quantidade / 1000;
    }
    else if(medida == 'M' && newmedida == 'C'){ //ML para Metro Cubico
        resultado = quantidade / 1000000;
    }
    else if(medida == 'C' && newmedida == 'L'){ //Metros Cubicos para Litro
        resultado = quantidade * 1000;
    }
    else if(medida == 'C' && newmedida == 'M'){ // Metros Cubicos para ML
        resultado = quantidade * 1000000;
    }
    else if(medida == newmedida){ //Mesma unidade de conversao
        resultado = quantidade;
    }
    else{
        printf("Unidade Invalida, Tente Novamente!\n");
        return;
    }

    printf("Resultado da Conversão: %.2f %c \n", resultado, newmedida);
}

void converterVelocidade(float quantidade, char medida, char newmedida){ //Função Converte Velocidade
    float resultado;

    if(medida == 'K' && newmedida == 'M'){ // KM para MetroSegundo
        resultado = quantidade / 3.6;
    }
    else if(medida == 'K' && newmedida == 'I'){ // KM Para Milhas
        resultado = quantidade / 1.609;
    }
    else if(medida == 'M' && newmedida == 'K'){ // MetroSegundo para KM
        resultado = quantidade * 3.6;
    }
    else if(medida == 'M' && newmedida == 'I'){ // MetroSegundo para Milhas
        resultado = (quantidade * 3.6) / 1.609;
    }
    else if(medida == 'I' && newmedida == 'M'){ // Milhas para MetroSegundo
        resultado = quantidade * 1.609;
    }
    else if(medida == 'I' && newmedida == 'K'){ // Milhas para Centimetro
        resultado = (quantidade * 1.609) / 3.6;
    }
    else if(medida == newmedida){ // Mesma Unidade
        resultado = quantidade;
    }
    else{
        printf("Unidade Invalida, Tente Novamente!\n");
        return;
    }
    printf("Resultado da Conversão: %.2f %c \n", resultado, newmedida);
}



int main(){

int op;
char medida;
char newmedida;
float quantidade;

printf("Bem vindo ao Conversor de medidas \n");
/*printf("1-Unidades de Comprimento\n");
printf("2-Unidades de Massa\n"); */
printf("3-Unidades de Volume\n");
printf("4-Unidades de Temperatura\n"); 
printf("5-Unidades de Velocidade\n");
/*printf("6-Unidades de Energetica\n");
printf("7-Unidades de Área\n");
printf("8-Unidades de Tempo\n");
printf("9-Unidades de Armazenamento\n");  */
scanf("%d", &op);

switch(op) {
    case 3:

    printf("Conversor de Volume\n");
    printf("Insira o valor do Volume que deseja converter; \n");
    scanf("%f", &quantidade);
    printf("Insira nome da medida(L - Litro, M - Militro, C - Metro Cubico.)");
    scanf(" %c", &medida);  
    printf("Informe Para Qual unidade de Volume você deseja converter.\n (L - Litro, M - Militro, C - Metro Cubico.)\n");
    scanf(" %c", &newmedida);  
    converterVolume(quantidade, medida, newmedida);
    break;

    case 4:

    ConversorDeTemperatura();
    break;

    case 5:

    printf("Conversor de Velocidade\n");
    printf("Insira o valor da Velocidade que deseja converter; \n");
    scanf("%f", &quantidade);
    printf("Insira a sigla da unidade da medida(K - Quilometro Por Hora, M - Metros Por Segundo, I - Milhas Por Hora)\n");
    scanf(" %c", &medida);
    printf("Informe Para Qual unidade de Volume você deseja converter.\n (K - Quilometro Por Hora, M - Metros Por Segundo, I - Milhas Por Hora.)\n");
    scanf(" %c", &newmedida); 
    converterVelocidade(quantidade, medida, newmedida);
    break;

default: printf("Opção Invalida\n");
    break;
}

return 0;
}
