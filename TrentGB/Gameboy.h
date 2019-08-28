#pragma once
#include "CPU.h"
#include "Registers.h"
#include "MMU.h"
#include "GPU.h"
#include "cTypes.h"
#include "RAM.h"

class Gameboy
{
public:
	CPU cpu;
	RAM ram;


	Gameboy();
	~Gameboy();
};

