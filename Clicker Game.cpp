#include <iostream>
#include <vector>
#include <Windows.h>
#include <conio.h>
#include <fstream>

using namespace std;

class Clicker
{
private:
	double money;
	double money_click;
	double money_click_price;
	double money_click_multiplier;
	double money_click_multiplier_price;

	double fact_1_income;
	double fact_1_price;

	
	int counter;
	void SaveFile()
	{
		ofstream fout;
		fout.open("data.txt");
		fout << money << endl;
		fout << money_click_price << endl;
		fout << money_click_multiplier << endl;
		fout << money_click_multiplier_price << endl;
		fout << fact_1_income<<endl;
		fout << fact_1_price << endl;
		fout.close();
	}
	void ReadFile()
	{

	}
public:
	Clicker()
	{
		money = 0;
		money_click = 1;
		money_click_price = 20;
		money_click_multiplier = 1;
		money_click_multiplier_price = 50;
		fact_1_price = 100;
		fact_1_income = 0;
		flag = true;
		counter = 0;
	}


	//money = money + money_per_click;
	void Draw()
	{
		Sleep(10);
		system("cls");
		cout << "money " << money << endl;
		cout << "money per click "<< money_click << endl;
		cout << "money per click price " << money_click_price << " (C)" << endl;
		cout << "money per click multiplier" << money_click_multiplier <<" Дописать самим"<< endl;
		cout << "factory 1 price " << fact_1_price << " (F)"<<  endl;
		cout << "factory 1 income " << fact_1_income << endl;

	}
	void Logic()
	{
		if (counter == 100)
		{
			money = money + fact_1_income;
			counter = 0;
		}
		counter++;
	}
	void Input()
	{
		
		if (_kbhit() )
		{
			char key = _getch();
			
			switch (key)
			{
			case 32:
				money = money + money_click * money_click_multiplier;
				break;
			case 'с':
			case 'c':
				if (money >= money_click_price)
				{
					money_click = money_click + 1;
					money = money - money_click_price;
					money_click_price = money_click_price * 2;
				}

				break;
			case 'а':
			case 'f':
				if (money >= fact_1_price)
				{
					fact_1_income = fact_1_income + 1;
					money = money - fact_1_price;
					fact_1_price = fact_1_price * 2;
				}
				break;
			
			case 27:
				exit(0);
				break;
			}
		}
	}




};

void main()
{
	
	Clicker Game = Clicker();
	while (true)
	{
		Game.Draw();
		Game.Input();
		Game.Logic();
	}
	

}

