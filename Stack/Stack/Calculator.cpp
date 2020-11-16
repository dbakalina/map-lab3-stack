#pragma once
#include "Stack.h"
#include "Ñalculator.h"
#include <string>
using namespace std;

bool Calculator::CheckBrackets()
{
	for (int i = 0; i < formula.size(); i++)
	{
		if (formula[i] == '(')
		{
			st_c.Push('(');
		}
		if (formula[i] == ')')
		{
			if (st_c.Empty()== true)
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

double Calculator::Calc()
{
	char* tmp;
	double res=0;
	for (int i = 0; i < infex.size(); i++)
	{
		if (infex[i] >= '0' && infex[i] <= '9')
		{
			/*double d = strtod(&infex[i], &tmp);
			int j = tmp - &infex[i];
			i += j - 1;
			st_d.Push(d);*/
		}
		if (infex[i] == '+' || infex[i] == '-' || infex[i] == '*' || infex[i] == '/' || infex[i] == '^')
		{
			double x, y;
			y = st_d.Pop();  
			x = st_d.Pop();
			switch (infex[i])
			{
			case '+':
				res = x + y; break;
			case '-':
				res = x - y; break;
			case '*':
				res = x * y; break;
			case '/':
				res = x / y; break;
			case '^':
				res = pow(x, y); break;

			default: if (formula[i] != ' ')
				st_d.Push(formula[i] - '0');
				break;
			}
			st_d.Push(res);
		}
	}
	res = st_d.Pop();
	return res;
}

