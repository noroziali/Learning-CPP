#include  <iostream>
#include  <stdlib.h>
using namespace std;

int main()
{
	system("title Advanced-Calculator");
	system("color a");
	int a, b, c=0, r;
	char op;
	while (1)
	{
		cout << "insert your first number:" << endl;
		cin >> a;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "You're input is Invalid, tray again:" << endl;
			cin >> a;
		}
		cin >> b;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "You're input is Invalid, tray again:" << endl;
			cin >> b;
		}
		cin >> op;
		while (op != '+' && op != '-' && op != '/' && op != '*')
		{
			cout << "invalid Operation, Try a Valid Operator:" << endl;
			cin >> op;
		}
		if (op == '+')
		{
			cout << "you chosed to have the sum:" << endl;
			r = a + b;
			cout << "the result is :" << r << endl;

		}
		else if (op == '-')
		{
			cout << "you chosed to have the minus:" << endl;
			r = a - b;
			cout << "the result is :" << r << endl;
		}
		else if (op == '*')
		{
			cout << "you chosed to have the Multipliy:" << endl;
			r = a * b;
			cout << "the result is :" << r << endl;
		}
		else if (op == '/' && b == 0)
		{
			cout << "you chosed to have the substract:" << endl;
			r = 0;
			cout << "the result is :" << r << endl;
		}
		else
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



// C++ program to create calculator using 
// switch statement 
#include <iostream> 
using namespace std;

// Main program 
main()
{
	char op;
	float num1, num2;

	// It allows user to enter operator i.e. +, -, *, / 
	cin >> op;

	// It allow user to enter the operands 
	cin >> num1 >> num2;

	// Switch statement begins 
	switch (op) {

		// If user enter + 
	case '+':
		cout << num1 + num2;
		break;

		// If user enter - 
	case '-':
		cout << num1 - num2;
		break;

		// If user enter * 
	case '*':
		cout << num1 * num2;
		break;

		// If user enter / 
	case '/':
		cout << num1 / num2;
		break;

		// If the operator is other than +, -, * or /, 
		// error message will display 
	default:
		cout << "Error! operator is not correct";
		break;
	} // switch statement ends 

	return 0;
}
