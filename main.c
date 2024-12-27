#include "volumeConverter.h"
#include "velocidadeConverter.h"
#include "interfaceConverter.h"

int main() {
	//initLengthConverter();
	//initMassConverter();
	initVolumeConverter();
    initVelocidadeConverter();
	//initTemperatureConverter();
	unsigned int choice = 100;
	while(choice != 0) {
		int choice = getConverter();
		switch (choice) {
		case 0: return 0;
		case 1: getVolumeConverter();
        case 2: getVelocidadeConverter();
		default: continue;
		}
	}
}