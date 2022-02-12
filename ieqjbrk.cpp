#include <iostream>
using namespace std;
int main()
{
	int i,j;
	cout << "Enter a number to break the loop \n";
	cin >> j;
	for (i=0; i<10; i++)
	{
		if(i==j)
			break;
		cout << "i=" << i << "\n";
	}
	return 0;
}
