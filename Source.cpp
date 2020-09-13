#include "EightBitRegister.h"

EightBitRegister testReg;


int main()
{
	testReg.SetValue(0x0F);
	uint8_t register_value = testReg.GetValue();

	std::cout << register_value << std::endl;



	return 0;
}