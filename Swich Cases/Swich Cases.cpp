
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	srand(time(0));
	int chose,n=0;
	char temp;
	cout << "Hello!\n";
	cout << "please chose your account type:\n\n";
	cout << "1.user\n";
	cout << "2.administrator\n";
	cout << "3.Manager\n";
	cout << "4.client admin\n\n";
	cout << "==========\n";
	cout << "insert only option number:";
	cin >> temp;
	/*while (temp != '4' || temp != '3' || temp != '2' || temp != '1')
	{
		cout << "invalid choice, try Again:" << endl;
		cin >> temp;
	}*/
	chose = temp;
	cout << chose;
	while (1)
	{
		switch (n)
		{
		default:
			break;
		case 1:
	
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
	
		}
		cout << "\nThis Program is Bulid by Soheyl Norozi on 3th of Farvardin 1398 \n";
		cout << "\n\n\nThanks For your Attentions!\n";
		//system("pause");
		//system("cls");
		//cout << "Hello!\n";
		//cout << "please chose your account type:\n\n";
		//cout << "1.user\n";
		//cout << "2.administrator\n";
		//cout << "3.Manager\n";
		//cout << "4.client admin\n\n";
		//cout << "==========\n";
		//cout << "insert only option number:";
	}
	
	return 0;
}