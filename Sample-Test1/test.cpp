#include "pch.h"
#include "../CalcTest/Calc.cpp"

TEST(CalcTest, getSum) {
	Calc calc;
	int sum = calc.getSum(1, 2);
	EXPECT_EQ(sum, 3);
}

TEST(CalcTest, getGop) {
	Calc calc;
	int Gop = calc.getGop(1, 2);
	EXPECT_EQ(Gop, 2);
}

TEST(CalcTest, GetSumSum) {
	Calc calc;
	int sum = calc.getSumSum(1, 2, 3);
	EXPECT_EQ(sum, 6);
}

TEST(CalcTest, GetZegop) {
	Calc calc;
	int ret = calc.getZegop(3);
	EXPECT_EQ(ret, 9);
}