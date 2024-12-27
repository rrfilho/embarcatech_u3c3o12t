#include "lengthConverter.h"
#include "areaConverter.h"
#include "dadosConverter.h"
#include "interfaceConverterChoice.h"

int main() {
	unsigned int choice = 100;
	while(choice != 0) {
		choice = getConverter();
		switch (choice) {
		case 0: return 0;
		case 1: getLengthConverter(); break;
		case 7: getAreaConverter(); break;
		case 9: getDataConverter(); break;
		default: continue;
		}
	}
}