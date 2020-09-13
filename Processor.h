#ifndef PROCESSOR_H
#define PROCESSOR_H

#include "definitions.h"
#include "SixteenBitRegister.h"

class Memory;

class Processor
{
public:
	struct ProcessorState
	{
		SixteenBitRegister* AF;
	};
public:
	SixteenBitRegister AF;
};

#endif // !PROCESSOR_H
