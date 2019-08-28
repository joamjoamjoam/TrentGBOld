#pragma once
#include <string>
#include "cTypes.h"
using namespace std;
class Registers
{
public:
	int a, b, c, d, e, h, l; // Normal registers
	int sp, pc, f; // Special registers

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

	// AF

	byte getB() {
		return b;
	}

	byte getC() {
		return c;
	}

	//BC

	byte getD() {
		return d;
	}

	byte getE() {
		return e;
	}

	//DE

	
	byte getH() {
		return h;
	}

	byte getL() {
		return l;
	}

	//HL

	word getStackPointer() {
		return sp;
	}

	word getProgramCounter() {
		return pc;
	}




	Registers() {
		a = 0;
		b = 0;
		c = 0;
		d = 0;
		e = 0;
		f = 0; 
		g = 0;
		h = 0;
	}
	~Registers();
};

