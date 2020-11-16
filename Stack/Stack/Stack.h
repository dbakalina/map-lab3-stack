#pragma once

template <class T> 
class Stack
{
	int size,max_size;
	T* mas;
public:
	Stack(int Max_size=2)
	{
		max_size = Max_size;
		mas = new T[max_size];
		size = 0;
	}
	~Stack()
	{
		size = 0;
		delete[] mas;
	}
	Stack(const Stack <T>& m)
	{
		max_size = m.max_size;
		mas = new T[max_size];
		size = m.size;
		for (int i = 0; i < size; i++)
		{
			mas[i] = m.mas[i];
		}
	}
	Stack& operator=(const Stack <T> &m)
	{
		if (max_size != m.max_size)
		{
			delete[] mas;
			max_size = m.max_size;
			mas = new T[max_size];
		}
		for (int i = 0; i < size; i++)
		{
			mas[i] = m.mas[i];
		}
		return (*this);
	}
	bool Empty()
	{
		if (size == 0)
			return true;
		return false;
	}
	bool Full()
	{
		if (size == max_size)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void Push(T a) //положить
	{
		if (Full())
		{
			throw - 1;
		}
		mas[size] = a;
		size++;
	}
	T Pop() //извлечь
	{
		if (Empty())
		{
			throw 0;
		}
		size--;
		return mas[size];
	}
	T Top() //посмотреть что на вершине
	{
		if (Empty())
		{
			throw 0;
		}
		return mas[size];
	}
};
