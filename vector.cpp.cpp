#include <iostream>
#include <string>
using namespace std;
class Vector
{
private:
	int length;
	int* mas;
public:
	Vector()
	{
		length = 0;
		mas = NULL;
	}
	Vector(int size)
	{
		mas = new int[size];
		for (int i = 0; i < size; i++)
		{
			mas[i] = 0;
		}
		length = size;
	}
	~Vector()
	{
		delete[] mas;
	}
	int Size()
	{
		return length;
	}
	
	int Get(int index)
	{ 
		if (index < length && index >= 0)
		{
			return mas[index];
		}
		else
		{
			cout << "Out of range" << endl;
			//throw "Out of range exception";
			return NULL;
		}
	}
	void Remove_by_index(int index)
	{
		if (index < length && index >= 0)
		{
			int* buf = new int[length - 1];
			for (int i = 0; i < index; i++)
			{
				buf[i] = mas[i];
			}
			for (int i = index + 1; i < length; i++)
			{
				buf[i-1] = mas[i];
			}
			delete[] mas;
			mas = buf;
			length--;
		}
		else
		{
			cout << "Out of range" << endl;
		}

	}
	void Show()
	{
		for (int i = 0; i < length; i++)
		{
			cout<<mas[i]<<" ";
		}
		cout << endl;
	}
	int& operator[] (int index)
	{
		if (index < length && index >= 0)
		{
			return mas[index];
		}
		else
		{
			cout << "Out of range" << endl;
			//throw "Out of range exception";
			//return NULL;
		}
	}
	bool operator==(Vector right)
	{
		if (length == right.Size())
		{
			for (int i = 0; i < length; i++)
			{
				if (mas[i] != right.Get(i))
				{
					return false;
				}
			}
			return true;
		}
		
	}
	void operator++()
	{
		for (int i = 0; i < length; i++)
		{
			mas[i] = mas[i] + 1;
		}
	}



	//Push
	//Remove_by_index
	//Remove_by_value
	//Sort !
	//FindValue
	//Insert
	//Show !
	//Size !
	//Get !






};




void main()
{
	system("pause");
}