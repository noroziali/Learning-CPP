#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	system("title sume-of-5-number");
	while (1)
	{
		int c;
		float a,r;
		r = 0;
		a = 0;
		c = 0;
		while (c<5)
		{
			cout << "Enter your number :" << endl;
			cin >> a;
			r = r + a;
			c++;
			
		}
		cout << "your sum is :" << endl;
		cout << r << endl;
		cout << "\nThis Program is Bulid by Soheyl Norozi on 3th of Farvardin 1398 \n";
		cout << "\n\n\nThanks For your Attentions!\n";
		system("pause");
		system("cls");
	}
	return 0;
}