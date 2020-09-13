#ifndef SIXTEENBITREGISTER_H
#define SIXTEENBITREGISTER_H

#include "definitions.h"
#include "EightBitRegister.h"

class SixteenBitRegister
{
public:
	SixteenBitRegister() {}
	void SetLow(uint8_t low);
	uint8_t GetLow() const;
	void SetHigh(uint8_t high);
	uint8_t GetHigh() const;
	EightBitRegister* GetHighRegister();
	EightBitRegister* GetLowRegister();
	void SetValue(uint16_t value);
	uint16_t GetValue() const;
	void Increment();
	void Decrement();

private:
	EightBitRegister m_High;
	EightBitRegister m_Low;
};

inline void SixteenBitRegister::SetLow(uint8_t low)
{
	m_Low.SetValue(low);
}

inline uint8_t SixteenBitRegister::GetLow() const
{
	return m_Low.GetValue();
}

inline void SixteenBitRegister::SetHigh(uint8_t high)
{
	m_High.SetValue(high);
}

inline uint8_t SixteenBitRegister::GetHigh() const
{
	return m_High.GetValue();
}

inline EightBitRegister* SixteenBitRegister::GetHighRegister()
{
	return &m_High;
}

inline EightBitRegister* SixteenBitRegister::GetLowRegister()
{
	return &m_Low;
}

inline void SixteenBitRegister::SetValue(uint16_t value)
{
	m_Low.SetValue((uint8_t)(value & 0xFF));
	m_High.SetValue((uint8_t)((value >> 8) & 0xFF));
}

inline uint16_t SixteenBitRegister::GetValue() const
{
	uint8_t high = m_High.GetValue();
	uint8_t low = m_Low.GetValue();

	return (high << 8) + low;
}

inline void SixteenBitRegister::Increment()
{
	uint16_t value = this->GetValue();
	value++;
	this->SetValue(value);
}

inline void SixteenBitRegister::Decrement()
{
	uint16_t value = this->GetValue();
	value--;
	this->SetValue(value);
}

#endif // !SIXTEENBITREGISTER_H
