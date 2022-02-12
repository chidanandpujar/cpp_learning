#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter y/n\n";
	cin >> ch;
	switch(ch) {
		case 'y': 
			cout << "y typed\n";
		break;
		case 'n': 
			cout << "n typed\n";
		break;
		default:
			cout << "Invalid input\n";
	}
	return 0;
}
