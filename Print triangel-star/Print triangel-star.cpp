// Print triangel-star.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// printPattern function to print pattern 
void printPattern(int n)
{
	// Variable initialization 
	int line_no = 1; // Line count 

	// Loop to print desired pattern 
	int curr_star = 0;
	for (int line_no = 1; line_no <= n; )
	{
		// If current star count is less than 
		// current line number 
		if (curr_star < line_no)
		{
			cout << "* ";
			curr_star++;
			continue;
		}

		// Else time to print a new line 
		if (curr_star == line_no)
		{
			cout << "\n";
			line_no++;
			curr_star = 0;
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
