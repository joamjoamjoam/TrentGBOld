#include <stdio.h>
#include "TrentGB.h"


int main(int argc, char** argvs) {
    int rc = 0;

	TrentGB emulator = TrentGB();

	rc = emulator.run();

	return rc;

}
