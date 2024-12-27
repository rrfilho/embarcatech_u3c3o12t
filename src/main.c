#include "lengthConverter.h"
#include "interfaceConverterChoice.h"

int main() {
	initLengthConverter();
	initMassConverter();
	initVolumeConverter();
	initTemperatureConverter();
	unsigned int choice = 100;
	while(choice != 0) {
		int choice = getConverter();
		switch (choice) {
		case 0: return 0;
		case 1: getLengthConverter();
		default: continue;
		}
	}
}