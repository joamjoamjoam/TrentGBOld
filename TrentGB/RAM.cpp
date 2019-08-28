#include "RAM.h"
#include <cstring>



RAM::RAM()
{
	memset(internalMemory, 0, sizeof(internalMemory));
}


RAM::~RAM()
{
}
