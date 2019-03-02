#include <iostream>
#include <bitset>

using namespace std;

struct point
{
	float x;
	float y;
};

float distance(point a, point b)
{
	point c;

	c.x = a.x;
	c.y = b.y;

	float AC, BC;
	AC = a.y - c.y;
	BC = b.x - c.x;

	return sqrt(pow(AC, 2) + pow(BC, 2));
}



int quad(point a)
{
	if (a.x > 0 && a.y > 0)
		return 1;
	if (a.x < 0 && a.y > 0)
		return 2;
	if (a.x < 0 && a.y < 0)
		return 3;
	if (a.x > 0 && a.y < 0)
		return 4;

	if (a.x == 0 || a.y == 0)
		return -1;
}

bool sq(point a, point b)
{
	if (quad(a) == quad(b) && quad(a) != -1)
		return true;
	if (quad(a) == -1 || quad(b) == -1)
		return false;
}

point midle_point(point A, point B)
{
	point t;
	t.x = (A.x + B.x) / 2;
	t.y = (A.y + B.y) / 2;
	return t;
}
void main()
{
	point a, b;
	a.x = 3;
	a.y = 7;

	b.x = 6;
	b.y = 3;
	
	cout<<distance(a, b);


	cout << quad(a) << " " << quad(b) << endl;
	cout << sq(a, b) << endl;
	point m = midle_point(a, b);
	cout << m.x << " " << m.y << endl;
	system("pause");
}