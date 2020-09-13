#ifndef EIGHTBITREGISTER_H
#define EIGHTBITREGISTER_H

#include "definitions.h"

class EightBitRegister
{
public:
	EightBitRegister() {}
	void SetValue(uint8_t value);
	uint8_t GetValue() const;
	void Increment();
	void Decrement();

private:
	uint8_t m_Value;
};


inline void EightBitRegister::SetValue(uint8_t value)
{
	m_Value = value;
}

inline uint8_t EightBitRegister::GetValue() const
{
	return m_Value;
}

inline void EightBitRegister::Increment()
{
	m_Value++;
}

inline void EightBitRegister::Decrement()
{
	m_Value--;
}

#endif // !EIGHTBITREGISTER_H

