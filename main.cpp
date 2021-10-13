#include <iostream>

class ArraySetClass
{
public:
	ArraySetClass()
	{
		newArray = new int[1000];
	}
	~ArraySetClass()
	{
		delete[] newArray;
		newArray = nullptr;
		printf("%p\n", newArray);
	}

public:
	int* newArray;
};
int main()
{
	ArraySetClass arrayset;
	for (int i = 0; i < 1000; i++)
	{
		arrayset.newArray[i] = i * 1;
		printf("%d\n", arrayset.newArray[i]);
	}
}
