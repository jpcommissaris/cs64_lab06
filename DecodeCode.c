#include "DecodeCode.h"

// Julian Commissaris && Rick Han 


mipsinstruction decode(int value)
{
	mipsinstruction instr;

	// TODO: fill in the fields
	instr.funct = value & 0x3F;
	instr.immediate = ((value & 0xFFFF) << 16) >> 16;
	instr.rd = (value & 0x1F) >> 11;
	instr.rt = (value & 0x1F) >> 16;
	instr.rs = (value & 0x1F) >> 21;
	instr.opcode = (value & 0x2F) >> 26;

	return instr;
}


