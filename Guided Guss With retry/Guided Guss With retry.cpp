// Guided Guss With retry.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	srand(time(0));
	int r, g;
	r = rand() % 100;
	cout << "Guss a number :" << endl;
	//cout << r;
	cin >> g;
	while (r != g)
	{
		if (g > r)
		{
			cout << "Wrong\n";
			cout << "your number is larger than the random number" << endl;
			cout << "Try Another number : \n";
			cin >> g;
		}
		else if (g < r)
		{
			cout << "Wrong\n";
			cout << "your number is smaller than the random number"<< endl;
			cout << "Try Another number : \n";
			cin >> g;
		}
	}
	if
		(r == g)
	{
		cout << "Correct!";
	}
	cout << "\nThis Program is Bulid by Soheyl Norozi on 3th of Farvardin 1398 \n";
	cout << "\n\n\nThanks For your Attentions!\n";

	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

 //Tips for Getting Started: 
 //  1. Use the Solution Explorer window to add/manage files
 //  2. Use the Team Explorer window to connect to source control
 //  3. Use the Output window to see build output and other messages
 //  4. Use the Error List window to view errors
 //  5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
 //  6. In the future, to open this project again, go to File > Open > Project and select the .sln file
