#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter (y/n)";
	cin >> ch;
	if (ch == 'y' || ch == 'Y')
		cout << "y typed\n";
	else if (ch == 'n' || ch == 'N')
		cout << "n typed\n";
	else
		cout << "Invalid input\n";
	return 0;
}
