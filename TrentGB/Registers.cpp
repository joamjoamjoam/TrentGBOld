#include "Registers.h"



byte Registers::getA() {
	return a;
}

byte Registers::getF() {
	return f;
}

word Registers::getAF() {
	word af = (a << 8) + f;
	return  af;
}

byte Registers::getB() {
	return b;
}

byte Registers::getC() {
	return c;
}

word Registers::getBC() {
	word bc = (b << 8) + c;
	return  bc;
}

byte Registers::getD() {
	return d;
}

byte Registers::getE() {
	return e;
}

word Registers::getDE() {
	word de = (d << 8) + e;
	return  de;
}


byte Registers::getH() {
	return h;
}

byte Registers::getL() {
	return l;
}

word Registers::getHL() {
	word hl = (h << 8) + l;
	return  hl;
}

word Registers::getStackPointer() {
	return sp;
}

word Registers::getProgramCounter() {
	return pc;
}





Registers::Registers()
{
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;
	l = 0;
	h = 0;
	sp = 0;
	pc = 0;
}

Registers::~Registers()
{
}
