#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	system("title Basic-Calculator");
	int a, b,r;
	char op;
	while (1)
	{
		cout << "insert your first number:" << endl;
		cin >> a;
		cout<<"insert your other number:"<< endl;
		cin >> b;
		cout << "pleae select your operation : + or - or * or /" << endl;
		cin >> op;
		while (op != '+' && op != '-' && op != '/' && op != '*')
		{
			cout << "invalid Operation, Try a Valid Operator:" << endl;
				cin >> op;
		}
		if (op =='+')
		{
			cout << "you chosed to have the sum:" << endl;
			r = a + b;
			cout << "the result is :" << r << endl;

		}
		else if (op == '-')
		{
			cout << "you chosed to have the minus:" << endl;
			r = a - b;
			cout <<"the result is :"<< r << endl;
		}
		else if (op == '*')
		{
			cout << "you chosed to have the Multipliy:" << endl;
			r = a * b;
			cout << "the result is :" << r << endl;
		}
		else if (op == '/')
		{
			cout << "you chosed to have the substract:" << endl;
			r = a / b;
			cout << "the result is :" << r << endl;
		}

		cout << "\nThis Program is Bulid by Soheyl Norozi on 13th of ordibehest 1398 \n";
		cout << "\n\n\nThanks For your Attentions!\n";
		system("pause");
		system("cls");

	}

	return (0);
}