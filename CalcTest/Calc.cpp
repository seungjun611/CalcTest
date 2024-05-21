#include <iostream>
#include <stdexcept>

class Calc
{
public:
	int getSum(int a, int b);
	int getGop(int a, int b);
	int getZegop(int a);

	int getSum(int a, int b) {
		return a + b;
	}
  
	int getGop(int a, int b) {
		return a * b;
	}

  int getZegop(int a) {
		return a * a;
	}
  
	int getMinus(int a, int b) {
		return a - b;
	}

	int getDivide(int a, int b){
		if (b == 0) {
			throw std::runtime_error("Division by zero");
		}
		return a / b;
	}
  
	int getSumSum(int a, int b, int c)
	{
		return a + b + c;
	}
};