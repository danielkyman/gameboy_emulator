#include "EightBitRegister.h"
//#include "SixteenBitRegister.h"
#include "Processor.h"

EightBitRegister testReg;
SixteenBitRegister testAF;
Processor cpu;





int main()
{
	testReg.SetValue(0x0F);
	testAF.SetValue(0x0001);

	cpu.AF = testAF;

	uint16_t AF_val = cpu.AF.GetValue();

	uint8_t test_register_value = testReg.GetValue();




	return 0;
}