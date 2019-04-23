// If.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int r, g;
	r = rand();
	cout << "Guss a number :";
	cin >> g;
	if
		(r == g)
	{
		cout << "Correct!";
	}
	else if (g > r)
	{
		cout << "Wrong\n";
		cout << "your number is larger than the random number";
		cout << "the Correct number was : \n";
		cout << r;
	}
	else if (g < r)
	{
		cout << "Wrong\n";
		cout << "your number is smaller than the random number";
		cout << "the Correct number was : \n";
		cout << r;
	}
	cout << "\nThis Program is Bulid by Soheyl Norozi on 3th of Farvardin 1398 \n";
	cout << "\n\n\nThanks For your Attentions!\n";

	system("pause");
	return 0;
}
//int main()
//{
//    cout << "Hello World!\n"; 
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
