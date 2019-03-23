#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
#include <ctime>
#include <conio.h>
#include <Windows.h>
#include <cstdlib>
using namespace std;

class Labirint
{
private:
	
	int map[3][5][5];
	int level;
	int current_i;
	int current_j;
	int score;
	bool end;
	void next_level()
	{
		level = level + 1;
		if (level == 3)
		{
			end = true;
		}
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (map[level][i][j] == 2)
				{
					current_i = i;
					current_j = j;
					break;
				}
			}
		}
	}
	
public:
	
	Labirint()
	{
		end = false;
		level = 0;
		current_i = 0;
		current_j = 0;
		score = 0;
		ifstream fin;
		fin.open("map.txt");
		if (fin.is_open() == true)
		{
			for (int k = 0; k < 3; k++)
			{
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 5; j++)
					{
						fin >> map[k][i][j];
					}

				}

			}
		}
		fin.close();
	}
	void Show()
	{
		for (int i = 0; i < 7; i++)
		{
			cout << static_cast<char>(177);
			cout << static_cast<char>(177);
		}
		cout << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << static_cast<char>(177);
			cout << static_cast<char>(177);
			for (int j = 0; j < 5; j++)
			{
				

				if (map[level][i][j] == 1)
				{
					cout << static_cast<char>(177);
					cout << static_cast<char>(177);
				}
				if (map[level][i][j] == 0)
				{
					cout << "  ";
				}
				if (map[level][i][j] == 3)
				{
					cout << "oo";
				}
				if (map[level][i][j] == 2)
				{
					cout << static_cast<char>(178);
					cout << static_cast<char>(178);
				}
				if (map[level][i][j] == 4)
				{
					cout << static_cast<char>(200);
					cout << static_cast<char>(201);
				}
			}
			cout << static_cast<char>(177);
			cout << static_cast<char>(177);
			cout << endl;
			

		}
		for (int i = 0; i < 7; i++)
		{
			cout << static_cast<char>(177);
			cout << static_cast<char>(177);
		}
		cout << endl;
	}
	
	void Move(string direction)
	{
		map[level][current_i][current_j] = 0;
		if (direction == "up" )
		{
			if(current_i>0  && map[level][current_i - 1][current_j] != 1)
			current_i = current_i - 1;
		}
		if (direction == "down")
		{
			if (current_i < 4 && map[level][current_i + 1][current_j] != 1)
			current_i = current_i + 1;
		}
		if (direction == "left")
		{
			if (current_j > 0 && map[level][current_i][current_j - 1] != 1)
			current_j = current_j - 1;
		}
		if (direction == "right")
		{
			if (current_j < 4 && map[level][current_i][current_j + 1] != 1)
			current_j = current_j + 1;
		}
		if (map[level][current_i][current_j] == 4)
		{
			next_level();
		}
		if (map[level][current_i][current_j] == 3)
		{
			score++;
		}
		map[level][current_i][current_j] = 2;
		
	}

	bool Victory()
	{
		return end;
	}

};


int main()
{
	SetConsoleOutputCP(251);
	SetConsoleCP(251);
	
	Labirint lb = Labirint();
	
	while (lb.Victory() != true)
	{
		system("cls");
		lb.Show();
		int keysArrow = _getch();
		string direction = "";
		if (keysArrow == 72 || keysArrow == 150 || keysArrow == 230)
		{
			direction = "up";
		}
		if (keysArrow == 80 || keysArrow == 155 || keysArrow == 235)
		{
			direction = "down";
		}
		if (keysArrow == 77 || keysArrow == 130 || keysArrow == 262)
		{
			direction = "right";
		}
		if (keysArrow == 75 || keysArrow == 148 || keysArrow == 235)
		{
			direction = "left";
		}
		lb.Move(direction);

		
		
	}
	

	
}