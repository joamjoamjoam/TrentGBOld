#include <stdio.h>
#include "TrentGB.h"







int main(int argc, char** argv[]) {
	int rc = 0;

	TrentGB emulator;

	rc = emulator.run();

	return rc;

}