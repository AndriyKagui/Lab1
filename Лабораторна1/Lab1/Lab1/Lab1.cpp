#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
	int x, y, z, first, second, third;
	cout << "Enter x" << endl;
	cin >> x;
	cout << "Enter y" << endl;
	cin >> y;
	cout << "Enter z" << endl;
	cin >> z;

	if (x != 0 && x != 1 || y != 0 && y != 1 || z != 0 && z != 1)
	{
		cout << "Wrong value(s)" << endl;
	}
	else 
	{
		first = y * z;

		if (x == 1 && first != 1)
		{
			second = 0;
		}
		else
		{
			second = 1;
		}

		third = 1;
		cout << "(y ^ z) = 1\t(x => (y ^ z)) = 2\t(x => (y ^ z)) => (x => (y ^ z)) = 3" << endl;

		cout << "x\ty\tz\t1\t2\t3\t\n" << x << "\t" << y << "\t" << z << "\t" << first << "\t" << second << "\t" << third;
	}
}
