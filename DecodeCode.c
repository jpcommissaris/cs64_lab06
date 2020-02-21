#include "DecodeCode.h"
#include <stdio.h>
// Julian Commissaris && Rick Han 


mipsinstruction decode(int value)
{
	mipsinstruction instr;

	// TODO: fill in the fields
	instr.funct = value & 0x3F;
	instr.immediate = ((value & 0xFFFF) << 16) >> 16;
	instr.rd = (value >> 11) & 0x1F;
	instr.rt = (value >> 16) & 0x1F;
	instr.rs = (value >> 21) & 0x1F;
	instr.opcode = (value >> 26) & 0x3F;

	//printf("%d, %d, %d, %d, %d, %d\n", instr.funct, instr.immediate, instr.rd, instr.rt, instr.rs, instr.opcode);

	return instr;
}


