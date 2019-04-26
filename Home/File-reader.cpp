#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream f("file.txt");

	if (f.is_open())
		cout << f.rdbuf();
}