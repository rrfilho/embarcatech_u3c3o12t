#include "Conversor_Area.h"

// Implementação das funções para conversão de área
double metros_quadrados_para_centimetros_quadrados(double metros) {
    return metros * 10000; // 1 metro quadrado = 10.000 centímetros quadrados
}

double centimetros_quadrados_para_metros_quadrados(double centimetros) {
    return centimetros / 10000;
}
