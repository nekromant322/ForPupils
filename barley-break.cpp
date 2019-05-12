#include <iostream>
#include <ctime>
#include <conio.h>
#include <Windows.h>
using namespace std;
class Pyatnashki
{
private:
	int m[4][4];
	int p01;
	int p02;
	int x;
	int y;
	int i1;
	int j1;
	bool end;





public:
	Pyatnashki()
	{
		p01 = 0;
		p02 = 0;
		x = 0;
		y = 0;
		i1 = 0;
		j1 = 0;
		end = true;
	}
	void Zapolnenie()
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				m[i][j] = 0;
			}
		}
	}


	void Poisk()
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (m[i][j] == 0)
				{
					p01 = i;
					p02 = j;
				}
			}
		}
	}
	void Zapolnenie_15()
	{
		for (i1 = 1; i1 <= 15;)
		{
			x = rand() % 4;
			y = rand() % 4;
			if (m[x][y] == 0)
			{
				m[x][y] = i1++;
			}
		}

	}

	void vivod()
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (m[i][j] != 0)
				{
					cout << m[i][j] << "\t";
				}
				else
				{
					cout << "  \t";
				}
			}
			cout << "\n\n\n\n";
		}
	}

	bool Konetc()
	{
		return end;
	}
	void go(string vali)
	{
		if (vali == "up" && m[p01][p02] != m[0][0] && m[p01][p02] != m[0][1] && m[p01][p02] != m[0][2] && m[p01][p02] != m[0][3])
		{
			swap(m[p01][p02], m[p01 - 1][p02]);
		}
		if (vali == "left" &&m[p01][p02] != m[0][0] && m[p01][p02] != m[1][0] && m[p01][p02] != m[2][0] && m[p01][p02] != m[3][0])
		{
			swap(m[p01][p02], m[p01][p02 - 1]);
		}
		if (vali == "right" && m[p01][p02] != m[0][3] && m[p01][p02] != m[1][3] && m[p01][p02] != m[2][3] && m[p01][p02] != m[3][3])
		{

			swap(m[p01][p02], m[p01][p02 + 1]);
		}
		if (vali == "down" && m[p01][p02] != m[3][0] && m[p01][p02] != m[3][1] && m[p01][p02] != m[3][2] && m[p01][p02] != m[3][3])
		{
			swap(m[p01][p02], m[p01 + 1][p02]);
		}
		{
			system("cls");
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (m[i][j] != 0)
					{
						cout << m[i][j] << "\t";
					}
					else
					{
						cout << "  \t";
					}
				}
				cout << "\n\n\n\n";
			}
		}
	}

	void proverka()
	{
		if (m[0][0] == 1 && m[0][1] == 2 && m[0][2] == 3 && m[0][3] == 4 && m[1][0] == 5 && m[1][1] == 6 && m[1][2] == 7 && m[1][3] == 8 && m[2][0] == 9 && m[2][1] == 10 && m[2][2] == 11 && m[2][3] == 12 && m[3][0] == 13 && m[3][1] == 14 && m[3][2] == 15)
		{
			end = false;
		}
	}




};
int main()
{
	srand(time(0));
	Pyatnashki A;


	A.Zapolnenie();
	A.Zapolnenie_15();
	A.vivod();

	//vivod




	while (A.Konetc())
	{
		string vali = "";
		A.Poisk();

		int key = _getch();
		if (key == 48 || key == 113)
		{
			break;
		}
		if (key == 72 || key == 230 || key == 119)
		{
			vali = "down";
		}
		if (key == 75 || key == 228 || key == 97)

		{
			vali = "right";
		}
		if (key == 77 || key == 162 || key == 100)
		{
			vali = "left";
		}

		if (key == 80 || key == 235 || key == 115)

		{
			vali = "up";
		}


		A.go(vali);
		A.proverka();

	}

	cout << "You win\n";
	system("pause");
}
