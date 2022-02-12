#include <iostream>
using namespace std;
int main()
{
	int i=5;
	int *p;
	p = &i;
	cout << *p << "\n";
	*p = *p + 1;
	cout << *p << "\n";
	i = i + 2;
	cout << *p << "\n";
	return 0;
}
