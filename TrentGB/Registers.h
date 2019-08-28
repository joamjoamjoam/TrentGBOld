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



	byte getA() {
		return a;
	}

	byte getF() {
		return f;
	}

	word getAF() {
		word af = (a << 8) + f;
		return  af;
	}

	byte getB() {
		return b;
	}

	byte getC() {
		return c;
	}

	word getBC() {
		word bc = (b << 8) + c;
		return  bc;
	}

	byte getD() {
		return d;
	}

	byte getE() {
		return e;
	}

	word getDE() {
		word de = (d << 8) + e;
		return  de;
	}

	
	byte getH() {
		return h;
	}

	byte getL() {
		return l;
	}

	word getHL() {
		word hl = (h << 8) + l;
		return  hl;
	}

	word getStackPointer() {
		return sp;
	}

	word getProgramCounter() {
		return pc;
	}




	Registers();
	~Registers();
};

