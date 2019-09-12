#pragma once
#include <string>
#include "cTypes.h"
using namespace std;
class Registers
{
public:
	int a, b, c, d, e, h, l; // Normal registers
	int sp, pc, f; // Special registers
	struct f {
		unsigned char unusedFlags : 4;
		unsigned char carryFlag : 1;
		unsigned char halfCarryFlag : 1;
		unsigned char subtractFlag : 1;
		unsigned char zeroFlag : 1;
	};



	// CPU Registers Map


//		+-------+------+
//		| 15..8 | 7..0 |
//		+=======+======+
//		| A     | F    |
//		+-------+------+
//		| B     | C    |
//		+-------+------+
//		| D     | E    |
//		+-------+------+
//		| H     | L    |
//		+--------------+
//		|	   SP	   |
//		+--------------+
//		|      PC	   |
//		+-------+------+



    byte getA();

    byte getF();

    word getAF();

    byte getB();

    byte getC();

    word getBC();

    byte getD();

    byte getE();

    word getDE();

    byte getH();

    byte getL();

    word getHL();

    word getStackPointer();

    word getProgramCounter();




	Registers();
	~Registers();
};

