#include "Conversor_dados.h"

// Implementação das funções para conversão de dados
double bits_para_bytes(double bits) {
    return bits / 8;
}

double bytes_para_kilobytes(double bytes) {
    return bytes / 1024;
}

double kilobytes_para_megabytes(double kilobytes) {
    return kilobytes / 1024;
}

double megabytes_para_gigabytes(double megabytes) {
    return megabytes / 1024;
}

double gigabytes_para_terabytes(double gigabytes) {
    return gigabytes / 1024;
}
