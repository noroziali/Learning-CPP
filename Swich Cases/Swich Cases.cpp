
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	system("title portal");
	int n=0;
	char temp;
	cout << "Hello!\n";
	cout << "please chose your account type:\n\n";
	cout << "1.user\n";
	cout << "2.administrator\n";
	cout << "3.Manager\n";
	cout << "4.client admin\n\n";
	cout << "==========\n";
	cout << "insert only option number:";
	select:cin >> temp;
	while (temp != '4' && temp != '3' && temp != '2' && temp != '1')
	{
		cout << "invalid choice, try Again:" << endl;
		cin >> temp;
	}
	n = temp;
	while (1)
	{
		switch (n)
		{
		case 49:
			cout << "you have chosed the first option";
			break;
		case 50:
			cout << "you have chosed the 2nd option";
			break;
		case 51:
			cout << "you have chosed the 3th option";
			break;
		case 52:
			cout << "you have chosed the 4th option";
			break;
	
		}
		cout << "\nThis Program is Bulid by Soheyl Norozi on 3th of Farvardin 1398 \n";
		cout << "\n\n\nThanks For your Attentions!\n";
		system("pause");
		system("cls");
		cout << "Hello!\n";
		cout << "please chose your account type:\n\n";
		cout << "1.user\n";
		cout << "2.administrator\n";
		cout << "3.Manager\n";
		cout << "4.client admin\n\n";
		cout << "==========\n";
		cout << "insert only option number:";
		goto select;
	}
	
	return 0;
}