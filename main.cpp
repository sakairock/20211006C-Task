#include <iostream>

class ArraySetClass
{
public:
	ArraySetClass()
	{
		newArray = nullptr;
	}
	~ArraySetClass()
	{
		delete[] newArray;
		newArray = nullptr;
		printf("%p\n", newArray);
	}
	void Create(int num)
	{
		newArray = new int[num];
		rangenum = num;
	}
	void Set( int setnum )
	{
		newArray[setnum] = setnum;
	}
	int Get( int getnum )
	{
		return newArray[getnum];
	}

private:
	int * newArray;
	int rangenum;
}; 

int ArraySetClass::Get(int getnum)
{
	if (getnum >= 0 && getnum < rangenum)
		return newArray[getnum];
	else
		return NULL;
}

void ArraySetClass::Set(int setnum)
{
	if (setnum >= 0 && setnum < rangenum)
		newArray[setnum] = setnum;
	else
		return;
}

int main()
{
	ArraySetClass arrayset;

	arrayset.Create(1000);

	for (int i = 0; i < 1000; i++)
	{
		arrayset.Set(i);
	}
	for (int i = 0; i < 1000; i++)
	{
		printf("%d\n", arrayset.Get(i));
	}

	return 0;
}

