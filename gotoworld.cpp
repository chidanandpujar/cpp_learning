#include <iostream>
using namespace std;
int main()
{
	int i=0;
	cout << "Hello \n";
	goto WORLD;
	cout << "World\n";

	WORLD:
		cout << "goto\n";
	return 0;
}
