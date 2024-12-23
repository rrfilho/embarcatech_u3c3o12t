#include <stdio.h>

float convertUniTempe (int selecTempe, float numAtualTempe) {

    float celPfah, celPkel;
    float fahPcel, fahPkel;
    float kelPcel, kelPfah;
    
    celPfah = (numAtualTempe*(9.00/5.00))+32;
    celPkel = numAtualTempe+273.15;
    fahPcel = (numAtualTempe-32)*(5.00/9.00);
    fahPkel = (numAtualTempe-32)*(5.00/9.00)+273.15;
    kelPcel = numAtualTempe-273.15;
    kelPfah = (numAtualTempe-273.15)*(9.00/5.00)+32;

/*
    Essa opção apresenta todos os valores, eliminando a utilização do switch e simplificando o codigo
    

    printf("%f Celcius equivale a %f Fahrenheit\n", numAtualTempe, celPfah);
    printf("%f Celcius equivale a %f Kelvin\n", numAtualTempe, celPkel);
    printf("%f Fahrenheit equivale a %f Celcius\n", numAtualTempe, fahPcel);
    printf("%f Fahrenheit equivale a %f Kelvin\n", numAtualTempe, fahPkel);
    printf("%f Kelvin equivale a %f Celcius\n", numAtualTempe, kelPcel);
    printf("%f Kelvin equivale a %f Fahrenheit\n", numAtualTempe, kelPfah);
*/

   switch (selecTempe)
    {
    case 1:
        printf("%f Celcius equivale a %f Fahrenheit\n", numAtualTempe, celPfah);
        break;
    case 2:
        printf("%f Celcius equivale a %f Kelvin\n", numAtualTempe, celPkel);
        break;
    case 3:
        printf("%f Fahrenheit equivale a %f Celcius\n", numAtualTempe, fahPcel);
        break;
    case 4:
        printf("%f Fahrenheit equivale a %f Kelvin\n", numAtualTempe, fahPkel);
        break;
    case 5:
        printf("%f Kelvin equivale a %f Celcius\n", numAtualTempe, kelPcel);
        break;
    case 6:
        printf("%f Kelvin equivale a %f Fahrenheit\n", numAtualTempe, kelPfah);
        break;            

    default:    printf("Opcao invalida\n");
        break;
    }

    return 0;

}

int main()
{
    float numAtualTempe;
    int selecTempe;

    printf("Informe O valor a ser convertido\n");
    scanf("%f", &numAtualTempe);
    printf("Informe a conversao que deseja\n");
    printf("Digite:\n");
    printf("(1) - Celcius para Fahrenheit\n");
    printf("(2) - Celcius para Kelvin\n");
    printf("(3) - Fahrenheit para Celsius\n");
    printf("(4) - Fahrenheit para Kelvin\n");
    printf("(5) - Kelvin para Celsius\n");
    printf("(6) - Kelvin para Fahrenheit\n");
    scanf("%d", &selecTempe);


    convertUniTempe(selecTempe, numAtualTempe);

    return 0;
}



