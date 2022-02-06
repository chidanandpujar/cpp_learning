#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter (y/n)";
	cin >> ch;
	if (ch == 'y')
		cout << "y typed\n";
	else if (ch == 'n')
		cout << "n typed\n";
	else
		cout << "Invalid input\n";
	return 0;
}
