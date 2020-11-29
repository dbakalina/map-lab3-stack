﻿#include <iostream>
#include "Stack.h"
#include "Сalculator.h"
#include <iostream>

using namespace std;

int main()
{
	string userExp;
	TCalculator calc;
	cout << "Enter your expession: " << endl;
	cin >> userExp;
	calc.SetFormula(userExp);
	try
	{
		cout << "Arithmetical expression: " << calc.GetInfix() << endl;
		calc.ToPostfix();
		cout << "Postfix form: " << calc.GetPostfix() << endl;
		cout << "Result: " << calc.CalcPostfix() << endl;
	}
	catch (const char* n) { std::cout << n << std::endl; }

	system("pause");
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
