#pragma once
#include "Stack.h"
#include <string>
using namespace std;
class Calculator
{
	string formula;
	Stack <char> st_c;//���� ��� �������� (������)
	Stack <double> st_d;//���� ��� �����
	string infex;//2 2 3 + *
public:
	Calculator() {};
	Calculator(const Calculator& calc);
	~Calculator() {};
	void SetFormula(string str)
	{
		formula = str;
		Stack<char> s(formula.size());
		Stack<double> d(formula.size());
		st_c = s;
		st_d = d;
	};
	bool CheckBrackets();
	double Calc();
 };