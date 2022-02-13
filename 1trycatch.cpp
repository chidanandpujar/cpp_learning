#include <iostream>
using namespace std;
int main()
{
	int a,b,r;
	cout << "Enter the value for a\n";
	cin >> a;
	cout << "Enter the volue for b\n";
	cin >> b;
	try {
		if(b!=0) {
			r=a/b;
			cout << "Result is:" << a << "\n";
		}
		else {
			throw(b);
		}
	}
	catch (int ex)
	{
		cout << "divide by zero exception\n";
	}
	return 0;
}
