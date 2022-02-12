#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter ch\n";
	cin >> ch;
	switch(ch) {
		case 'y':
		case 'Y':
			cout << "yes typed\n";
			break;
		case 'n':
		case 'N':
			cout << "no typed\n";
			break;
		default:
			cout << "Invalid input\n";
	}
	return 0;
}
