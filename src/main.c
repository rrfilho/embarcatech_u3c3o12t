#include "lengthConverter.h"
#include "volumeConverter.h"
#include "conversorTemperatura.h"
#include "velocidadeConverter.h"
#include "areaConverter.h"
#include "tempoConverter.h"
#include "dadosConverter.h"
#include "interfaceConverterChoice.h"

int main() {
	unsigned int choice = 100;
	while(choice != 0) {
		choice = getConverter();
		switch (choice) {
		case 0: return 0;
		case 1: getLengthConverter(); break;

		case 3: getVolumeConverter(); break;
		case 4: conversorDeTemperatura(); break;
		case 5: getVelocidadeConverter(); break;
		case 7: getAreaConverter(); break;
		case 8: converterTempo(); break;
		case 9: getDataConverter(); break;
		default: continue;
		}
	}
}