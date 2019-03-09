#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Person
{
private:
	int age;
public:
	string Name;
	string Gender;

	Person()
	{
		age = 0;
		Name = "";
		Gender = "";
	}
	Person(int a, string n, string g)
	{
		age = a;
		Name = n;
		Gender = g;
	}

	void Show()
	{
		cout << Name << " " << Gender << " " << age << endl;
	}
	void BirthDay()
	{
		age++;
	}
	void ChangeGender(string g)
	{
		Gender = g;
	}
	int GetAge()
	{
		return age;
	}
	
};

void main()
{
	Person A = Person(20, "Nastya", "Female");
	
	A.Show();
	A.BirthDay();
	A.Show();
	A.ChangeGender("Helicopter");
	A.Show();
	
	A.BirthDay();
	A.Show();
	
	cout << A.GetAge() << endl;
	
	
	system("pause");
}