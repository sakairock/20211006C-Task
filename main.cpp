#include <iostream>

class ArraySetClass
{
public:
	void Create( int num )
	{
		newArray = new int[num];
	}
	~ArraySetClass()
	{
		delete[] newArray;
		newArray = nullptr;
		printf("%p\n", newArray);
	}
	void Set( int i )
	{
		newArray[i] = i;
	}
	int Get( int i )
	{
		return newArray[i];
	}

private:
	int * newArray;
}; 
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
