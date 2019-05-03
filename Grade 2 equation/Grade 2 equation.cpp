#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
	system("title Grade 2 equation");
	float d, r1, r2;
	int a, b, c;
	while (1)
	{
		cout << "enter your parameter and hit enter:" << endl;
		cin >> a >> b >> c;
		d = (b * b) - (4 * a * c);
		if (d == 0)
		{
			r1 = (-b) / (2 * a);
			cout << r1;
		}
		else if (d > 0)
		{
			r1 = ((-b) + sqrt(d) / (2 * a));
			r2 = ((-b) - sqrt(d)) / (2 + a);
			cout << r1 << r2;
		}
		else
		{
			cout << "No Real Root";
		}
		cout << "\nThis Program is Bulid by Soheyl Norozi on 3th of Farvardin 1398 \n";
		cout << "\n\n\nThanks For your Attentions!\n";
		system("pause");
		system("cls");
	}
	return 0;
}