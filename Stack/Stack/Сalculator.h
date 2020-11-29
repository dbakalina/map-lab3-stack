#pragma once
#include "../Stack/Stack.h"
#include <string>
using namespace std;


class TCalculator
{
	string formula;
	Stack <char> st_c;                   // ���� ��� �������� (������)
	Stack <double> st_d;                 // ���� ��� �����
	string infix;                        // ��������� �����
	string postfix;                      // ����������� �����

	int Priority(char elem);             // ���������� ��������
public:
	TCalculator() : st_c(100), st_d(200) //�����������
	{
		infix = " ";
		postfix = " ";
	};
	TCalculator(const TCalculator& calc) //����������� �����������
	{
		infix = calc.infix;
		postfix = calc.postfix;
		st_c = calc.st_c;
		st_d = calc.st_d;
	}
	~TCalculator() {};                     //����������
	void SetFormula(string str);
	bool CheckBrackets();                 // �������� ������ 
	string GetInfix();                    // �������� ��������� ���������
	void SetExpression(string expr);
	string GetPostfix();                  // �������� ����������� ��������� 
	void ToPostfix();                     // ������� � ����������� �����
	double CalcPostfix();                 // ���������� ��������� �� ����������� �����
	double Calc();                        // ���������� �� 1 ������ �� ��������� �����
};