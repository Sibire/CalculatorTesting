#include "Testing.h"
#include "..//../calculator-chris-Sibire/SWE_App/Calculator.h"

bool TestCalculator(double answer, std::string input)
{
	double result = std::stod(Calculator::getInstance()->CalculateAns(input));
	if (result == answer)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool passed = false;

bool addition = TestCalculator(10, "3+7");
bool subtraction = TestCalculator(5, "13-8");
bool multiplication = TestCalculator(20, "5*4");
bool division = TestCalculator(9, "45/5");
bool modulo = TestCalculator(2, "17/5");
bool sine = TestCalculator(0.89, "S90");
bool cosine = TestCalculator(-0.59, "C180");
bool tangent = TestCalculator(0.64, "T10");
bool OrdOps1 = TestCalculator(71, "5+7*10-4");
bool OrdOps2 = TestCalculator(3, "3-90/30*4+12");