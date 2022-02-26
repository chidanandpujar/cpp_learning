#include <iostream>
using namespace std;
void vadd(int a ,int b)
{
	cout << "Call by value is called\n";
	a = 5; 
	b = 6;
}

void radd(int &a, int &b)
{
	cout << "Call by reference is called\n";
	a = 5;
	b = 6;
}

int main()

{
	int x =1, y =2;
	vadd(x,y);
	cout << "After vadd() in main()\n";
	cout << "x=" << x << "\n";
	cout << "y=" << y << "\n";
	radd(x,y);
	cout << "After radd() in main()\n";
	cout << "x=" << x << "\n";
	cout << "y=" << y << "\n";
	return 0;
}
