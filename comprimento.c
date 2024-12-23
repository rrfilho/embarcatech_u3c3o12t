#include <stdio.h>
#include "comprimento.h"

float metroPcenti(float medida){
    return medida*100;
}
float metroPmili(float medida){
    return medida*1000;
}
float centiPmetro(float medida){
    return medida/100;
}
float centiPmili(float medida){
    return medida*10;
}
float miliPmetro(float medida){
    return medida/1000;
}
float miliPcenti(float medida){
    return medida/10;
}