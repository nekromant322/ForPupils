#include<iostream>
using namespace std;
void mas(int m[9][9])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (j % 3 == 0)cout << "  ";
			if (m[i][j] == 0)cout << "_ ";
			if (m[i][j] == 1 || m[i][j] == 4)cout << "* ";
			if (m[i][j] == 2 || m[i][j] == 5)cout << "x ";
			if (m[i][j] == 6) cout << "  ";
			if (i == 2 && j == 8 || i == 5 && j == 8)cout << endl;
		}cout << endl;
	}//for
}
int main()
{
	setlocale(0, "");
	int m[9][9] = {
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	};
	int last = 0;
	int x_or_o = 0;
	while (x_or_o != 1 && x_or_o != 2)
	{
		system("cls");
		cout << "Choose side  1. x  \n             2. o\n";
		cin >> x_or_o;
	}
	int count = 0;
	int step;
	int answer = 0;
	while (true)
	{
		system("cls");
		mas(m);
		if (count >= 0)
		{
			if (x_or_o == 1)
				cout << "cross" << endl;
			else
				cout << "zero" << endl;
		}
		if (last != answer)
		{
			cout << "move to area " << answer << endl;
		}
		if (count == 0)
		{
			cout << "choose area" << endl;
			cin >> answer;
			count++;
			cout << "move to area " << answer << endl;
		}
		if (last == answer)
		{
			cout << "choose area" << endl;
			cin >> answer;
			cout << "move to area " << answer << endl;
		}
		if (answer == 1)
		{
			if (m[0][0] != 4 && m[0][0] != 5)
			{
				cin >> step;
				if (step == 1) { if (m[0][0] != 1 && m[0][0] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[0][0] = x_or_o; } }
				if (step == 2) { if (m[0][1] != 1 && m[0][1] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[0][1] = x_or_o; } }
				if (step == 3) { if (m[0][2] != 1 && m[0][2] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[0][2] = x_or_o; } }
				if (step == 4) { if (m[1][0] != 1 && m[1][0] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[1][0] = x_or_o; } }
				if (step == 5) { if (m[1][1] != 1 && m[1][1] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[1][1] = x_or_o; } }
				if (step == 6) { if (m[1][2] != 1 && m[1][2] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[1][2] = x_or_o; } }
				if (step == 7) { if (m[2][0] != 1 && m[2][0] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[2][0] = x_or_o; } }
				if (step == 8) { if (m[2][1] != 1 && m[2][1] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[2][1] = x_or_o; } }
				if (step == 9) { if (m[2][2] != 1 && m[2][2] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[2][2] = x_or_o; } }
				if (m[0][0] == 1 && m[0][1] == 1 && m[0][2] == 1 || m[0][0] == 1 && m[1][1] == 1 && m[2][2] == 1 || m[1][0] == 1 && m[1][1] == 1 && m[1][2] == 1 || m[2][0] == 1 && m[2][1] == 1 && m[2][2] == 1 || m[2][0] == 1 && m[1][1] == 1 && m[0][2] == 1 || m[0][1] == 1 && m[1][1] == 1 && m[2][1] == 1 || m[0][2] == 1 && m[1][2] == 1 && m[2][2] == 1 || m[0][0] == 1 && m[1][0] == 1 && m[2][0] == 1)
				{
					m[1][1] = 6;
					m[1][2] = 4;
					m[0][1] = 4;
					m[0][2] = 4;
					m[2][0] = 4;
					m[2][1] = 4;
					m[2][2] = 4;
					m[1][0] = 4;
					m[0][0] = 4;
				}
				if (m[0][0] == 2 && m[0][1] == 2 && m[0][2] == 2 || m[0][0] == 2 && m[1][1] == 2 && m[2][2] == 2 || m[1][0] == 2 && m[1][1] == 2 && m[1][2] == 2 || m[2][0] == 2 && m[2][1] == 2 && m[2][2] == 2 || m[2][0] == 2 && m[1][1] == 2 && m[0][2] == 2 || m[0][1] == 2 && m[1][1] == 2 && m[2][1] == 2 || m[0][2] == 2 && m[1][2] == 2 && m[2][2] == 2 || m[0][0] == 2 && m[1][0] == 2 && m[2][0] == 2)
				{
					m[1][1] = 5;
					m[1][2] = 6;
					m[0][1] = 6;
					m[0][2] = 5;
					m[2][0] = 5;
					m[2][1] = 6;
					m[2][2] = 5;
					m[1][0] = 6;
					m[0][0] = 5;
				}
			}
			else
			{
				answer = step;
				last = answer;
			}
			if (m[0][0] == 4 && m[3][3] == 4 && m[6][6] == 4 || m[0][6] == 4 && m[3][3] == 4 && m[6][0] == 4 || m[0][0] == 4 && m[0][3] == 4 && m[0][6] == 4 || m[3][0] == 4 && m[3][3] == 4 && m[3][6] == 4 || m[6][0] == 4 && m[6][3] == 4 && m[6][6] == 4 || m[0][0] == 4 && m[3][0] == 4 && m[6][0] == 4 || m[0][3] == 4 && m[3][3] == 4 && m[6][3] == 4 || m[0][6] == 4 && m[3][6] == 4 && m[6][6] == 4)
			{
				system("cls");
				mas(m);
				cout << endl << "      zero win" << endl << endl;
				break;
			}
			else if (m[0][0] == 5 && m[3][3] == 5 && m[6][6] == 5 || m[0][6] == 5 && m[3][3] == 5 && m[6][0] == 5 || m[0][0] == 5 && m[0][3] == 5 && m[0][6] == 5 || m[3][0] == 5 && m[3][3] == 5 && m[3][6] == 5 || m[6][0] == 5 && m[6][3] == 5 && m[6][6] == 5 || m[0][0] == 5 && m[3][0] == 5 && m[6][0] == 5 || m[0][3] == 5 && m[3][3] == 5 && m[6][3] == 5 || m[0][6] == 5 && m[3][6] == 5 && m[6][6] == 5)
			{
				system("cls");
				mas(m);
				cout << endl << "      cross win" << endl << endl;
				break;
			}
			int countfornowinner = 0;
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (m[i][j] == 0)
					{
						countfornowinner++;
					}
				}
			}
			if (countfornowinner == 0)
			{
				system("cls");
				cout << "no winner" << endl;
				break;
			}
			continue;
		}
		if (answer == 2)
		{
			if (m[0][3] != 4 && m[0][3] != 5)
			{
				cin >> step;
				if (step == 1) { if (m[0][3] != 1 && m[0][3] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[0][3] = x_or_o; } }
				if (step == 2) { if (m[0][4] != 1 && m[0][4] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[0][4] = x_or_o; } }
				if (step == 3) { if (m[0][5] != 1 && m[0][5] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[0][5] = x_or_o; } }
				if (step == 4) { if (m[1][3] != 1 && m[1][3] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[1][3] = x_or_o; } }
				if (step == 5) { if (m[1][4] != 1 && m[1][4] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[1][4] = x_or_o; } }
				if (step == 6) { if (m[1][5] != 1 && m[1][5] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[1][5] = x_or_o; } }
				if (step == 7) { if (m[2][3] != 1 && m[2][3] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[2][3] = x_or_o; } }
				if (step == 8) { if (m[2][4] != 1 && m[2][4] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[2][4] = x_or_o; } }
				if (step == 9) { if (m[2][5] != 1 && m[2][5] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[2][5] = x_or_o; } }
				if (m[0][3] == 1 && m[0][4] == 1 && m[0][5] == 1 || m[0][3] == 1 && m[1][4] == 1 && m[2][5] == 1 || m[1][3] == 1 && m[1][4] == 1 && m[1][5] == 1 || m[2][3] == 1 && m[2][4] == 1 && m[2][5] == 1 || m[2][3] == 1 && m[1][4] == 1 && m[0][5] == 1 || m[0][4] == 1 && m[1][4] == 1 && m[2][4] == 1 || m[0][5] == 1 && m[1][5] == 1 && m[2][5] == 1 || m[0][3] == 1 && m[1][3] == 1 && m[2][3] == 1)
				{
					m[1][4] = 6;
					m[1][5] = 4;
					m[0][4] = 4;
					m[0][5] = 4;
					m[2][3] = 4;
					m[2][4] = 4;
					m[2][5] = 4;
					m[1][3] = 4;
					m[0][3] = 4;
				}
				if (m[0][3] == 2 && m[0][4] == 2 && m[0][5] == 2 || m[0][3] == 2 && m[1][4] == 2 && m[2][5] == 2 || m[1][3] == 2 && m[1][4] == 2 && m[1][5] == 2 || m[2][3] == 2 && m[2][4] == 2 && m[2][5] == 2 || m[2][3] == 2 && m[1][4] == 2 && m[0][5] == 2 || m[0][4] == 2 && m[1][4] == 2 && m[2][4] == 2 || m[0][5] == 2 && m[1][5] == 2 && m[2][5] == 2 || m[0][3] == 2 && m[1][3] == 2 && m[2][3] == 2)
				{
					m[0][3] = 5;
					m[0][4] = 6;
					m[0][5] = 5;
					m[1][3] = 6;
					m[1][4] = 5;
					m[1][5] = 6;
					m[2][3] = 5;
					m[2][4] = 6;
					m[2][5] = 5;
				}
			}
			else
			{
				answer = step;
				last = answer;
			}
			if (m[0][0] == 4 && m[3][3] == 4 && m[6][6] == 4 || m[0][6] == 4 && m[3][3] == 4 && m[6][0] == 4 || m[0][0] == 4 && m[0][3] == 4 && m[0][6] == 4 || m[3][0] == 4 && m[3][3] == 4 && m[3][6] == 4 || m[6][0] == 4 && m[6][3] == 4 && m[6][6] == 4 || m[0][0] == 4 && m[3][0] == 4 && m[6][0] == 4 || m[0][3] == 4 && m[3][3] == 4 && m[6][3] == 4 || m[0][6] == 4 && m[3][6] == 4 && m[6][6] == 4)
			{
				system("cls");
				mas(m);
				cout << endl << "      zero win" << endl << endl;
				break;
			}
			else if (m[0][0] == 5 && m[3][3] == 5 && m[6][6] == 5 || m[0][6] == 5 && m[3][3] == 5 && m[6][0] == 5 || m[0][0] == 5 && m[0][3] == 5 && m[0][6] == 5 || m[3][0] == 5 && m[3][3] == 5 && m[3][6] == 5 || m[6][0] == 5 && m[6][3] == 5 && m[6][6] == 5 || m[0][0] == 5 && m[3][0] == 5 && m[6][0] == 5 || m[0][3] == 5 && m[3][3] == 5 && m[6][3] == 5 || m[0][6] == 5 && m[3][6] == 5 && m[6][6] == 5)
			{
				system("cls");
				mas(m);
				cout << endl << "      cross win" << endl << endl;
				break;
			}
			int countfornowinner = 0;
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (m[i][j] == 0)
					{
						countfornowinner++;
					}
				}
			}
			if (countfornowinner == 0)
			{
				system("cls");
				mas(m);
				cout << "      no winner" << endl;
				break;
			}
			continue;
		}
		if (answer == 3)
		{
			if (m[0][6] != 4 && m[0][6] != 5)
			{
				cin >> step;
				if (step == 1) { if (m[0][6] != 1 && m[0][6] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[0][6] = x_or_o; } }
				if (step == 2) { if (m[0][7] != 1 && m[0][7] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[0][7] = x_or_o; } }
				if (step == 3) { if (m[0][8] != 1 && m[0][8] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[0][8] = x_or_o; } }
				if (step == 4) { if (m[1][6] != 1 && m[1][6] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[1][6] = x_or_o; } }
				if (step == 5) { if (m[1][7] != 1 && m[1][7] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[1][7] = x_or_o; } }
				if (step == 6) { if (m[1][8] != 1 && m[1][8] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[1][8] = x_or_o; } }
				if (step == 7) { if (m[2][6] != 1 && m[2][6] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[2][6] = x_or_o; } }
				if (step == 8) { if (m[2][7] != 1 && m[2][7] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[2][7] = x_or_o; } }
				if (step == 9) { if (m[2][8] != 1 && m[2][8] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[2][8] = x_or_o; } }
				if (m[0][6] == 1 && m[0][7] == 1 && m[0][8] == 1 || m[0][6] == 1 && m[1][7] == 1 && m[2][8] == 1 || m[1][6] == 1 && m[1][7] == 1 && m[1][8] == 1 || m[2][6] == 1 && m[2][7] == 1 && m[2][8] == 1 || m[2][6] == 1 && m[1][7] == 1 && m[0][8] == 1 || m[0][7] == 1 && m[1][7] == 1 && m[2][7] == 1 || m[0][8] == 1 && m[1][8] == 1 && m[2][8] == 1 || m[0][6] == 1 && m[1][6] == 1 && m[2][6] == 1)
				{
					m[1][7] = 6;
					m[1][6] = 4;
					m[0][6] = 4;
					m[0][7] = 4;
					m[2][8] = 4;
					m[2][7] = 4;
					m[2][6] = 4;
					m[1][8] = 4;
					m[0][8] = 4;
				}
				if (m[0][6] == 2 && m[0][7] == 2 && m[0][8] == 2 || m[0][6] == 2 && m[1][7] == 2 && m[2][8] == 2 || m[1][6] == 2 && m[1][7] == 2 && m[1][8] == 2 || m[2][6] == 2 && m[2][7] == 2 && m[2][8] == 2 || m[2][6] == 2 && m[1][7] == 2 && m[0][8] == 2 || m[0][7] == 2 && m[1][7] == 2 && m[2][7] == 2 || m[0][8] == 2 && m[1][8] == 2 && m[2][8] == 2 || m[0][6] == 2 && m[1][6] == 2 && m[2][6] == 2)
				{
					m[1][7] = 5;
					m[1][6] = 6;
					m[0][7] = 6;
					m[0][6] = 5;
					m[2][8] = 5;
					m[2][7] = 6;
					m[2][6] = 5;
					m[1][8] = 6;
					m[0][8] = 5;;
				}
			}
			else
			{
				answer = step;
				last = answer;
			}
			if (m[0][0] == 4 && m[3][3] == 4 && m[6][6] == 4 || m[0][6] == 4 && m[3][3] == 4 && m[6][0] == 4 || m[0][0] == 4 && m[0][3] == 4 && m[0][6] == 4 || m[3][0] == 4 && m[3][3] == 4 && m[3][6] == 4 || m[6][0] == 4 && m[6][3] == 4 && m[6][6] == 4 || m[0][0] == 4 && m[3][0] == 4 && m[6][0] == 4 || m[0][3] == 4 && m[3][3] == 4 && m[6][3] == 4 || m[0][6] == 4 && m[3][6] == 4 && m[6][6] == 4)
			{
				system("cls");
				mas(m);
				cout << endl << "      zero win" << endl << endl;
				break;
			}
			else if (m[0][0] == 5 && m[3][3] == 5 && m[6][6] == 5 || m[0][6] == 5 && m[3][3] == 5 && m[6][0] == 5 || m[0][0] == 5 && m[0][3] == 5 && m[0][6] == 5 || m[3][0] == 5 && m[3][3] == 5 && m[3][6] == 5 || m[6][0] == 5 && m[6][3] == 5 && m[6][6] == 5 || m[0][0] == 5 && m[3][0] == 5 && m[6][0] == 5 || m[0][3] == 5 && m[3][3] == 5 && m[6][3] == 5 || m[0][6] == 5 && m[3][6] == 5 && m[6][6] == 5)
			{
				system("cls");
				mas(m);
				cout << endl << "      cross win" << endl << endl;
				break;
			}
			int countfornowinner = 0;
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (m[i][j] == 0)
					{
						countfornowinner++;
					}
				}
			}
			if (countfornowinner == 0)
			{
				system("cls");
				mas(m);
				cout << "      no winner" << endl;
				break;
			}
			continue;
		}
		if (answer == 4)
		{
			if (m[3][0] != 4 && m[3][0] != 5)
			{
				cin >> step;
				if (step == 1) { if (m[3][0] != 1 && m[3][0] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[3][0] = x_or_o; } }
				if (step == 2) { if (m[3][1] != 1 && m[3][1] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[3][1] = x_or_o; } }
				if (step == 3) { if (m[3][2] != 1 && m[3][2] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[3][2] = x_or_o; } }
				if (step == 4) { if (m[4][0] != 1 && m[4][0] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[4][0] = x_or_o; } }
				if (step == 5) { if (m[4][1] != 1 && m[4][1] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[4][1] = x_or_o; } }
				if (step == 6) { if (m[4][2] != 1 && m[4][2] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[4][2] = x_or_o; } }
				if (step == 7) { if (m[5][0] != 1 && m[5][0] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[5][0] = x_or_o; } }
				if (step == 8) { if (m[5][1] != 1 && m[5][1] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[5][1] = x_or_o; } }
				if (step == 9) { if (m[5][2] != 1 && m[5][2] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[5][2] = x_or_o; } }
				if (m[3][0] == 1 && m[3][1] == 1 && m[3][2] == 1 || m[3][0] == 1 && m[4][1] == 1 && m[5][2] == 1 || m[4][0] == 1 && m[4][1] == 1 && m[4][2] == 1 || m[5][0] == 1 && m[5][1] == 1 && m[5][2] == 1 || m[5][0] == 1 && m[4][1] == 1 && m[3][2] == 1 || m[3][1] == 1 && m[4][1] == 1 && m[5][1] == 1 || m[3][2] == 1 && m[4][2] == 1 && m[5][2] == 1 || m[3][0] == 1 && m[4][0] == 1 && m[5][0] == 1)
				{
					m[4][1] = 6;
					m[4][2] = 4;
					m[3][1] = 4;
					m[3][2] = 4;
					m[3][0] = 4;
					m[5][1] = 4;
					m[5][2] = 4;
					m[4][0] = 4;
					m[5][0] = 4;
				}
				if (m[3][0] == 2 && m[3][1] == 2 && m[3][2] == 2 || m[3][0] == 2 && m[4][1] == 2 && m[5][2] == 2 || m[4][0] == 2 && m[4][1] == 2 && m[4][2] == 2 || m[5][0] == 2 && m[5][1] == 2 && m[5][2] == 2 || m[5][0] == 2 && m[4][1] == 2 && m[3][2] == 2 || m[3][1] == 2 && m[4][1] == 2 && m[5][1] == 2 || m[3][2] == 2 && m[4][2] == 2 && m[5][2] == 2 || m[3][0] == 2 && m[4][0] == 2 && m[5][0] == 2)
				{
					m[4][1] = 5;
					m[4][2] = 6;
					m[3][1] = 6;
					m[3][2] = 5;
					m[5][0] = 5;
					m[5][1] = 6;
					m[5][2] = 5;
					m[4][0] = 6;
					m[3][0] = 5;
				}
			}
			else
			{
				answer = step;
				last = answer;
			}
			if (m[0][0] == 4 && m[3][3] == 4 && m[6][6] == 4 || m[0][6] == 4 && m[3][3] == 4 && m[6][0] == 4 || m[0][0] == 4 && m[0][3] == 4 && m[0][6] == 4 || m[3][0] == 4 && m[3][3] == 4 && m[3][6] == 4 || m[6][0] == 4 && m[6][3] == 4 && m[6][6] == 4 || m[0][0] == 4 && m[3][0] == 4 && m[6][0] == 4 || m[0][3] == 4 && m[3][3] == 4 && m[6][3] == 4 || m[0][6] == 4 && m[3][6] == 4 && m[6][6] == 4)
			{
				system("cls");
				mas(m);
				cout << endl << "      zero win" << endl << endl;
				break;
			}
			else if (m[0][0] == 5 && m[3][3] == 5 && m[6][6] == 5 || m[0][6] == 5 && m[3][3] == 5 && m[6][0] == 5 || m[0][0] == 5 && m[0][3] == 5 && m[0][6] == 5 || m[3][0] == 5 && m[3][3] == 5 && m[3][6] == 5 || m[6][0] == 5 && m[6][3] == 5 && m[6][6] == 5 || m[0][0] == 5 && m[3][0] == 5 && m[6][0] == 5 || m[0][3] == 5 && m[3][3] == 5 && m[6][3] == 5 || m[0][6] == 5 && m[3][6] == 5 && m[6][6] == 5)
			{
				system("cls");
				mas(m);
				cout << endl << "      cross win" << endl << endl;
				break;
			}
			int countfornowinner = 0;
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (m[i][j] == 0)
					{
						countfornowinner++;
					}
				}
			}
			if (countfornowinner == 0)
			{
				system("cls");
				mas(m);
				cout << "      no winner" << endl;
				break;
			}
			continue;
		}
		if (answer == 5)
		{
			if (m[3][3] != 4 && m[3][3] != 5)
			{
				cin >> step;
				if (step == 1) { if (m[3][3] != 1 && m[3][3] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[3][3] = x_or_o; } }
				if (step == 2) { if (m[3][4] != 1 && m[3][4] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[3][4] = x_or_o; } }
				if (step == 3) { if (m[3][5] != 1 && m[3][5] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[3][5] = x_or_o; } }
				if (step == 4) { if (m[4][3] != 1 && m[4][3] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[4][3] = x_or_o; } }
				if (step == 5) { if (m[4][4] != 1 && m[4][4] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[4][4] = x_or_o; } }
				if (step == 6) { if (m[4][5] != 1 && m[4][5] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[4][5] = x_or_o; } }
				if (step == 7) { if (m[5][3] != 1 && m[5][3] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[5][3] = x_or_o; } }
				if (step == 8) { if (m[5][4] != 1 && m[5][4] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[5][4] = x_or_o; } }
				if (step == 9) { if (m[5][5] != 1 && m[5][5] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[5][5] = x_or_o; } }
				if (m[3][3] == 1 && m[3][4] == 1 && m[3][5] == 1 || m[3][3] == 1 && m[4][4] == 1 && m[5][5] == 1 || m[4][3] == 1 && m[4][4] == 1 && m[4][5] == 1 || m[5][3] == 1 && m[5][4] == 1 && m[5][5] == 1 || m[5][3] == 1 && m[4][4] == 1 && m[3][5] == 1 || m[3][4] == 1 && m[4][4] == 1 && m[5][4] == 1 || m[3][5] == 1 && m[4][5] == 1 && m[5][5] == 1 || m[3][3] == 1 && m[4][3] == 1 && m[5][3] == 1)
				{
					m[4][4] = 6;
					m[4][3] = 4;
					m[3][3] = 4;
					m[3][4] = 4;
					m[3][5] = 4;
					m[5][5] = 4;
					m[5][3] = 4;
					m[4][5] = 4;
					m[5][4] = 4;
				}
				if (m[3][3] == 2 && m[3][4] == 2 && m[3][5] == 2 || m[3][3] == 2 && m[4][4] == 2 && m[5][5] == 2 || m[4][3] == 2 && m[4][4] == 2 && m[4][5] == 2 || m[5][3] == 2 && m[5][4] == 2 && m[5][5] == 2 || m[5][3] == 2 && m[4][4] == 2 && m[3][5] == 2 || m[3][4] == 2 && m[4][4] == 2 && m[5][4] == 2 || m[3][5] == 2 && m[4][5] == 2 && m[5][5] == 2 || m[3][3] == 2 && m[4][3] == 2 && m[5][3] == 2)
				{
					m[4][4] = 5;
					m[4][3] = 6;
					m[3][4] = 6;
					m[3][3] = 5;
					m[5][5] = 5;
					m[5][4] = 6;
					m[5][3] = 5;
					m[4][5] = 6;
					m[3][5] = 5;
				}
			}
			else
			{
				answer = step;
				last = answer;
			}
			if (m[0][0] == 4 && m[3][3] == 4 && m[6][6] == 4 || m[0][6] == 4 && m[3][3] == 4 && m[6][0] == 4 || m[0][0] == 4 && m[0][3] == 4 && m[0][6] == 4 || m[3][0] == 4 && m[3][3] == 4 && m[3][6] == 4 || m[6][0] == 4 && m[6][3] == 4 && m[6][6] == 4 || m[0][0] == 4 && m[3][0] == 4 && m[6][0] == 4 || m[0][3] == 4 && m[3][3] == 4 && m[6][3] == 4 || m[0][6] == 4 && m[3][6] == 4 && m[6][6] == 4)
			{
				system("cls");
				mas(m);
				cout << endl << "      zero win" << endl << endl;
				break;
			}
			else if (m[0][0] == 5 && m[3][3] == 5 && m[6][6] == 5 || m[0][6] == 5 && m[3][3] == 5 && m[6][0] == 5 || m[0][0] == 5 && m[0][3] == 5 && m[0][6] == 5 || m[3][0] == 5 && m[3][3] == 5 && m[3][6] == 5 || m[6][0] == 5 && m[6][3] == 5 && m[6][6] == 5 || m[0][0] == 5 && m[3][0] == 5 && m[6][0] == 5 || m[0][3] == 5 && m[3][3] == 5 && m[6][3] == 5 || m[0][6] == 5 && m[3][6] == 5 && m[6][6] == 5)
			{
				system("cls");
				mas(m);
				cout << endl << "      cross win" << endl << endl;
				break;
			}
			int countfornowinner = 0;
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (m[i][j] == 0)
					{
						countfornowinner++;
					}
				}
			}
			if (countfornowinner == 0)
			{
				system("cls");
				mas(m);
				cout << "      no winner" << endl;
				break;
			}
			continue;
		}
		if (answer == 6)
		{
			if (m[3][6] != 4 && m[3][6] != 5)
			{
				cin >> step;
				if (step == 1) { if (m[3][6] != 1 && m[3][6] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[3][6] = x_or_o; } }
				if (step == 2) { if (m[3][7] != 1 && m[3][7] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[3][7] = x_or_o; } }
				if (step == 3) { if (m[3][8] != 1 && m[3][8] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[3][8] = x_or_o; } }
				if (step == 4) { if (m[4][6] != 1 && m[4][6] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[4][6] = x_or_o; } }
				if (step == 5) { if (m[4][7] != 1 && m[4][7] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[4][7] = x_or_o; } }
				if (step == 6) { if (m[4][8] != 1 && m[4][8] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[4][8] = x_or_o; } }
				if (step == 7) { if (m[5][6] != 1 && m[5][6] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[5][6] = x_or_o; } }
				if (step == 8) { if (m[5][7] != 1 && m[5][7] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[5][7] = x_or_o; } }
				if (step == 9) { if (m[5][8] != 1 && m[5][8] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[5][8] = x_or_o; } }
				if (m[3][6] == 1 && m[3][7] == 1 && m[3][8] == 1 || m[3][6] == 1 && m[4][7] == 1 && m[5][8] == 1 || m[4][6] == 1 && m[4][7] == 1 && m[4][8] == 1 || m[5][6] == 1 && m[5][7] == 1 && m[5][8] == 1 || m[5][6] == 1 && m[4][7] == 1 && m[3][8] == 1 || m[3][7] == 1 && m[4][7] == 1 && m[5][7] == 1 || m[3][8] == 1 && m[4][8] == 1 && m[5][8] == 1 || m[3][6] == 1 && m[4][6] == 1 && m[5][6] == 1)
				{
					m[4][7] = 6;
					m[3][6] = 4;
					m[3][7] = 4;
					m[3][8] = 4;
					m[4][6] = 4;
					m[4][8] = 4;
					m[5][6] = 4;
					m[5][7] = 4;
					m[5][8] = 4;
				}
				if (m[3][6] == 2 && m[3][7] == 2 && m[3][8] == 2 || m[3][6] == 2 && m[4][7] == 2 && m[5][8] == 2 || m[4][6] == 2 && m[4][7] == 2 && m[4][8] == 2 || m[5][6] == 2 && m[5][7] == 2 && m[5][8] == 2 || m[5][6] == 2 && m[4][7] == 2 && m[3][8] == 2 || m[3][7] == 2 && m[4][7] == 2 && m[5][7] == 2 || m[3][8] == 2 && m[4][8] == 2 && m[5][8] == 2 || m[3][6] == 2 && m[4][6] == 2 && m[5][6] == 2)
				{
					m[3][6] = 5;
					m[3][7] = 6;
					m[3][8] = 5;
					m[4][6] = 6;
					m[4][7] = 5;
					m[4][8] = 6;
					m[5][6] = 5;
					m[5][7] = 6;
					m[5][8] = 5;
				}
			}
			else
			{
				answer = step;
				last = answer;
			}
			if (m[0][0] == 4 && m[3][3] == 4 && m[6][6] == 4 || m[0][6] == 4 && m[3][3] == 4 && m[6][0] == 4 || m[0][0] == 4 && m[0][3] == 4 && m[0][6] == 4 || m[3][0] == 4 && m[3][3] == 4 && m[3][6] == 4 || m[6][0] == 4 && m[6][3] == 4 && m[6][6] == 4 || m[0][0] == 4 && m[3][0] == 4 && m[6][0] == 4 || m[0][3] == 4 && m[3][3] == 4 && m[6][3] == 4 || m[0][6] == 4 && m[3][6] == 4 && m[6][6] == 4)
			{
				system("cls");
				mas(m);
				cout << endl << "      zero win" << endl << endl;
				break;
			}
			else if (m[0][0] == 5 && m[3][3] == 5 && m[6][6] == 5 || m[0][6] == 5 && m[3][3] == 5 && m[6][0] == 5 || m[0][0] == 5 && m[0][3] == 5 && m[0][6] == 5 || m[3][0] == 5 && m[3][3] == 5 && m[3][6] == 5 || m[6][0] == 5 && m[6][3] == 5 && m[6][6] == 5 || m[0][0] == 5 && m[3][0] == 5 && m[6][0] == 5 || m[0][3] == 5 && m[3][3] == 5 && m[6][3] == 5 || m[0][6] == 5 && m[3][6] == 5 && m[6][6] == 5)
			{
				system("cls");
				mas(m);
				cout << endl << "      cross win" << endl << endl;
				break;
			}
			int countfornowinner = 0;
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (m[i][j] == 0)
					{
						countfornowinner++;
					}
				}
			}
			if (countfornowinner == 0)
			{
				system("cls");
				mas(m);
				cout << "      no winner" << endl;
				break;
			}
			continue;
		}
		if (answer == 7)
		{
			if (m[6][0] != 4 && m[6][0] != 5)
			{
				cin >> step;
				if (step == 1) { if (m[6][0] != 1 && m[6][0] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[6][0] = x_or_o; } }
				if (step == 2) { if (m[6][1] != 1 && m[6][1] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[6][1] = x_or_o; } }
				if (step == 3) { if (m[6][2] != 1 && m[6][2] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[6][2] = x_or_o; } }
				if (step == 4) { if (m[7][0] != 1 && m[7][0] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[7][0] = x_or_o; } }
				if (step == 5) { if (m[7][1] != 1 && m[7][1] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[7][1] = x_or_o; } }
				if (step == 6) { if (m[7][2] != 1 && m[7][2] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[7][2] = x_or_o; } }
				if (step == 7) { if (m[8][0] != 1 && m[8][0] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[8][0] = x_or_o; } }
				if (step == 8) { if (m[8][1] != 1 && m[8][1] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[8][1] = x_or_o; } }
				if (step == 9) { if (m[8][2] != 1 && m[8][2] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[8][2] = x_or_o; } }
				if (m[6][0] == 1 && m[6][1] == 1 && m[6][2] == 1 || m[6][0] == 1 && m[7][1] == 1 && m[8][2] == 1 || m[7][0] == 1 && m[7][1] == 1 && m[7][2] == 1 || m[8][0] == 1 && m[2][1] == 1 && m[8][2] == 1 || m[8][0] == 1 && m[7][1] == 1 && m[6][2] == 1 || m[6][1] == 1 && m[7][1] == 1 && m[8][1] == 1 || m[6][2] == 1 && m[7][2] == 1 && m[8][2] == 1 || m[6][0] == 1 && m[7][0] == 1 && m[8][0] == 1)
				{
					m[7][1] = 6;
					m[6][0] = 4;
					m[6][1] = 4;
					m[6][2] = 4;
					m[7][0] = 4;
					m[7][2] = 4;
					m[8][0] = 4;
					m[8][1] = 4;
					m[8][2] = 4;
				}
				if (m[6][0] == 2 && m[6][1] == 2 && m[6][2] == 2 || m[6][0] == 2 && m[7][1] == 2 && m[8][2] == 2 || m[7][0] == 2 && m[7][1] == 2 && m[7][2] == 2 || m[8][0] == 2 && m[8][1] == 2 && m[8][2] == 2 || m[8][0] == 2 && m[7][1] == 2 && m[6][2] == 2 || m[6][1] == 2 && m[7][1] == 2 && m[8][1] == 2 || m[6][2] == 2 && m[7][2] == 2 && m[8][2] == 2 || m[6][0] == 2 && m[7][0] == 2 && m[8][0] == 2)
				{
					m[6][0] = 5;
					m[6][1] = 6;
					m[6][2] = 5;
					m[7][0] = 6;
					m[7][1] = 5;
					m[7][2] = 6;
					m[8][0] = 5;
					m[8][1] = 6;
					m[8][2] = 5;
				}
			}
			else
			{
				answer = step;
				last = answer;
			}
			if (m[0][0] == 4 && m[3][3] == 4 && m[6][6] == 4 || m[0][6] == 4 && m[3][3] == 4 && m[6][0] == 4 || m[0][0] == 4 && m[0][3] == 4 && m[0][6] == 4 || m[3][0] == 4 && m[3][3] == 4 && m[3][6] == 4 || m[6][0] == 4 && m[6][3] == 4 && m[6][6] == 4 || m[0][0] == 4 && m[3][0] == 4 && m[6][0] == 4 || m[0][3] == 4 && m[3][3] == 4 && m[6][3] == 4 || m[0][6] == 4 && m[3][6] == 4 && m[6][6] == 4)
			{
				system("cls");
				mas(m);
				cout << endl << "      zero win" << endl << endl;
				break;
			}
			else if (m[0][0] == 5 && m[3][3] == 5 && m[6][6] == 5 || m[0][6] == 5 && m[3][3] == 5 && m[6][0] == 5 || m[0][0] == 5 && m[0][3] == 5 && m[0][6] == 5 || m[3][0] == 5 && m[3][3] == 5 && m[3][6] == 5 || m[6][0] == 5 && m[6][3] == 5 && m[6][6] == 5 || m[0][0] == 5 && m[3][0] == 5 && m[6][0] == 5 || m[0][3] == 5 && m[3][3] == 5 && m[6][3] == 5 || m[0][6] == 5 && m[3][6] == 5 && m[6][6] == 5)
			{
				system("cls");
				mas(m);
				cout << endl << "      cross win" << endl << endl;
				break;
			}
			int countfornowinner = 0;
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (m[i][j] == 0)
					{
						countfornowinner++;
					}
				}
			}
			if (countfornowinner == 0)
			{
				system("cls");
				mas(m);
				cout << "      no winner" << endl;
				break;
			}
			continue;
		}
		if (answer == 8)
		{
			if (m[6][3] != 4 && m[6][3] != 5)
			{
				cin >> step;
				if (step == 1) { if (m[6][3] != 1 && m[6][3] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[6][3] = x_or_o; } }
				if (step == 2) { if (m[6][4] != 1 && m[6][4] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[6][4] = x_or_o; } }
				if (step == 3) { if (m[6][5] != 1 && m[6][5] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[6][5] = x_or_o; } }
				if (step == 4) { if (m[7][3] != 1 && m[7][3] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[7][3] = x_or_o; } }
				if (step == 5) { if (m[7][4] != 1 && m[7][4] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[7][4] = x_or_o; } }
				if (step == 6) { if (m[7][5] != 1 && m[7][5] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[7][5] = x_or_o; } }
				if (step == 7) { if (m[8][3] != 1 && m[8][3] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[8][3] = x_or_o; } }
				if (step == 8) { if (m[8][4] != 1 && m[8][4] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[8][4] = x_or_o; } }
				if (step == 9) { if (m[8][5] != 1 && m[8][5] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[8][5] = x_or_o; } }
				if (m[6][3] == 1 && m[6][4] == 1 && m[6][5] == 1 || m[6][3] == 1 && m[7][4] == 1 && m[8][5] == 1 || m[7][3] == 1 && m[7][4] == 1 && m[7][5] == 1 || m[8][3] == 1 && m[8][4] == 1 && m[8][5] == 1 || m[8][3] == 1 && m[7][4] == 1 && m[6][5] == 1 || m[6][4] == 1 && m[7][4] == 1 && m[8][4] == 1 || m[6][5] == 1 && m[7][5] == 1 && m[8][5] == 1 || m[6][3] == 1 && m[7][3] == 1 && m[8][3] == 1)
				{
					m[7][4] = 6;
					m[6][3] = 4;
					m[6][4] = 4;
					m[6][5] = 4;
					m[7][3] = 4;
					m[7][5] = 4;
					m[8][3] = 4;
					m[8][4] = 4;
					m[8][5] = 4;
				}
				if (m[6][3] == 2 && m[6][4] == 2 && m[6][5] == 2 || m[6][3] == 2 && m[7][4] == 2 && m[8][5] == 2 || m[7][3] == 2 && m[7][4] == 2 && m[7][5] == 2 || m[8][3] == 2 && m[8][4] == 2 && m[8][5] == 2 || m[8][3] == 2 && m[7][4] == 2 && m[6][5] == 2 || m[6][4] == 2 && m[7][4] == 2 && m[8][4] == 2 || m[6][5] == 2 && m[7][5] == 2 && m[8][5] == 2 || m[6][3] == 2 && m[7][3] == 2 && m[8][3] == 2)
				{
					m[6][3] = 5;
					m[6][4] = 6;
					m[6][5] = 5;
					m[7][3] = 6;
					m[7][4] = 5;
					m[7][5] = 6;
					m[8][3] = 5;
					m[8][4] = 6;
					m[8][5] = 5;
				}
			}
			else
			{
				answer = step;
				last = answer;
			}
			if (m[0][0] == 4 && m[3][3] == 4 && m[6][6] == 4 || m[0][6] == 4 && m[3][3] == 4 && m[6][0] == 4 || m[0][0] == 4 && m[0][3] == 4 && m[0][6] == 4 || m[3][0] == 4 && m[3][3] == 4 && m[3][6] == 4 || m[6][0] == 4 && m[6][3] == 4 && m[6][6] == 4 || m[0][0] == 4 && m[3][0] == 4 && m[6][0] == 4 || m[0][3] == 4 && m[3][3] == 4 && m[6][3] == 4 || m[0][6] == 4 && m[3][6] == 4 && m[6][6] == 4)
			{
				system("cls");
				mas(m);
				cout << endl << "      zero win" << endl << endl;
				break;
			}
			else if (m[0][0] == 5 && m[3][3] == 5 && m[6][6] == 5 || m[0][6] == 5 && m[3][3] == 5 && m[6][0] == 5 || m[0][0] == 5 && m[0][3] == 5 && m[0][6] == 5 || m[3][0] == 5 && m[3][3] == 5 && m[3][6] == 5 || m[6][0] == 5 && m[6][3] == 5 && m[6][6] == 5 || m[0][0] == 5 && m[3][0] == 5 && m[6][0] == 5 || m[0][3] == 5 && m[3][3] == 5 && m[6][3] == 5 || m[0][6] == 5 && m[3][6] == 5 && m[6][6] == 5)
			{
				system("cls");
				mas(m);
				cout << endl << "      cross win" << endl << endl;
				break;
			}
			int countfornowinner = 0;
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (m[i][j] == 0)
					{
						countfornowinner++;
					}
				}
			}
			if (countfornowinner == 0)
			{
				system("cls");
				mas(m);
				cout << "      no winner" << endl;
				break;
			}
			continue;
		}
		if (answer == 9)
		{
			if (m[6][6] != 4 && m[6][6] != 5)
			{
				cin >> step;
				if (step == 1) { if (m[6][6] != 1 && m[6][6] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[6][6] = x_or_o; } }
				if (step == 2) { if (m[6][7] != 1 && m[6][7] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[6][7] = x_or_o; } }
				if (step == 3) { if (m[6][8] != 1 && m[6][8] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[6][8] = x_or_o; } }
				if (step == 4) { if (m[7][6] != 1 && m[7][6] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[7][6] = x_or_o; } }
				if (step == 5) { if (m[7][7] != 1 && m[7][7] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[7][7] = x_or_o; } }
				if (step == 6) { if (m[7][8] != 1 && m[7][8] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[7][8] = x_or_o; } }
				if (step == 7) { if (m[8][6] != 1 && m[8][6] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[8][6] = x_or_o; } }
				if (step == 8) { if (m[8][7] != 1 && m[8][7] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[8][7] = x_or_o; } }
				if (step == 9) { if (m[8][8] != 1 && m[8][8] != 2) { answer = step; if (x_or_o == 1) { x_or_o = 2; } else { x_or_o = 1; } m[8][8] = x_or_o; } }
				if (m[6][6] == 1 && m[6][7] == 1 && m[6][8] == 1 || m[6][6] == 1 && m[7][7] == 1 && m[8][8] == 1 || m[7][6] == 1 && m[7][7] == 1 && m[7][8] == 1 || m[8][6] == 1 && m[8][7] == 1 && m[8][8] == 1 || m[8][6] == 1 && m[7][7] == 1 && m[6][8] == 1 || m[6][7] == 1 && m[7][7] == 1 && m[8][7] == 1 || m[6][8] == 1 && m[7][8] == 1 && m[8][8] == 1 || m[6][6] == 1 && m[7][6] == 1 && m[8][6] == 1)
				{
					m[7][7] = 6;
					m[7][6] = 4;
					m[6][6] = 4;
					m[6][7] = 4;
					m[8][8] = 4;
					m[8][7] = 4;
					m[8][6] = 4;
					m[7][8] = 4;
					m[6][8] = 4;
				}
				if (m[6][6] == 2 && m[6][7] == 2 && m[6][8] == 2 || m[6][6] == 2 && m[7][7] == 2 && m[8][8] == 2 || m[7][6] == 2 && m[7][7] == 2 && m[7][8] == 2 || m[8][6] == 2 && m[8][7] == 2 && m[8][8] == 2 || m[8][6] == 2 && m[7][7] == 2 && m[6][8] == 2 || m[6][7] == 2 && m[7][7] == 2 && m[8][7] == 2 || m[6][8] == 2 && m[7][8] == 2 && m[8][8] == 2 || m[6][6] == 2 && m[7][6] == 2 && m[8][6] == 2)
				{
					m[7][7] = 5;
					m[7][6] = 6;
					m[6][7] = 6;
					m[6][6] = 5;
					m[8][8] = 5;
					m[8][7] = 6;
					m[8][6] = 5;
					m[7][8] = 6;
					m[6][8] = 5;
				}
			}
			else
			{
				answer = step;
				last = answer;
			}
			if (m[0][0] == 4 && m[3][3] == 4 && m[6][6] == 4 || m[0][6] == 4 && m[3][3] == 4 && m[6][0] == 4 || m[0][0] == 4 && m[0][3] == 4 && m[0][6] == 4 || m[3][0] == 4 && m[3][3] == 4 && m[3][6] == 4 || m[6][0] == 4 && m[6][3] == 4 && m[6][6] == 4 || m[0][0] == 4 && m[3][0] == 4 && m[6][0] == 4 || m[0][3] == 4 && m[3][3] == 4 && m[6][3] == 4 || m[0][6] == 4 && m[3][6] == 4 && m[6][6] == 4)
			{
				system("cls");
				mas(m);
				cout << endl << "      zero win" << endl << endl;
				break;
			}
			else if (m[0][0] == 5 && m[3][3] == 5 && m[6][6] == 5 || m[0][6] == 5 && m[3][3] == 5 && m[6][0] == 5 || m[0][0] == 5 && m[0][3] == 5 && m[0][6] == 5 || m[3][0] == 5 && m[3][3] == 5 && m[3][6] == 5 || m[6][0] == 5 && m[6][3] == 5 && m[6][6] == 5 || m[0][0] == 5 && m[3][0] == 5 && m[6][0] == 5 || m[0][3] == 5 && m[3][3] == 5 && m[6][3] == 5 || m[0][6] == 5 && m[3][6] == 5 && m[6][6] == 5)
			{
				system("cls");
				mas(m);
				cout << endl << "      cross win" << endl << endl;
				break;
			}
			int countfornowinner = 0;
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (m[i][j] == 0)
					{
						countfornowinner++;
					}
				}
			}
			if (countfornowinner == 0)
			{
				system("cls");
				mas(m);
				cout << "      no winner" << endl;
				break;
			}
			continue;
		}
	}//while
	system("pause");
}
