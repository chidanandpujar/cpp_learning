#include <iostream>
using namespace std;
int main()
{
	int i = 1;
	cout << "i=" << i << "\n";
	i = i << 2;
	cout << "i=" << i << "\n";
	i = 9;
	i = i >> 2;
	cout << "i=" << i << "\n";
	i = 2; 
	int j = 3;
	i = i ^ j;
	cout << "i=" << i << "\n";
	return 0;
}
