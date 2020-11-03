#pragma once
#include "Stack.h"
#include <string>
using namespace std;
class Calculator
{
	string formula;
	Stack <char> st_c;//Стек для символов (скобок)
public:
	void SetFormula(string str)
	{
		formula = str;
	}
	bool CheckBrackets()
	{
		for (int i = 0; i < formula.size(); i++)
		{
			if (formula[i] == '(')
			{
				st_c.Push('(');
			}
			if (formula[i] == ')')
			{
				if (st_c.Empty())
				{
					return false;
				}
				else
				{
					st_c.Pop();
				}
			}
		}
		return st_c.Empty();
	}
 };