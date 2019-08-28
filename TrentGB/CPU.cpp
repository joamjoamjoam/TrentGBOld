#include "CPU.h"
#include "Registers.h"



CPU::CPU()
{
	registers = Registers();
	registers.pc = 0x0100; // Address of first CPU Instruction in ROM
	registers.sp = 0xFFFE;
}


CPU::~CPU()
{
}
