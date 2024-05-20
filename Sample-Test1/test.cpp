#include "pch.h"
#include "../CalcTest/Calc.cpp"


TEST(CalcTest, GetMinus) {
	Calc calc;
	EXPECT_EQ(1, calc.getMinus(2, 1));
}