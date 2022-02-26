#include <iostream>
using namespace std;
int add(int a, int b)
{
	cout << "2 ints add() called\n";
	return a+b;
}

int add(int a, int b, int c)
{
	cout << "3 ints add() called\n";
	return a+b+c;
}

double add(double a, double b)
{
	cout << "doubles add() called\n";
	return a+b;
}

string add(string a, string b)
{
	cout << "sring add() callled\n";
	return a+" "+b;
}

int main()
{
	cout << add(5,6) << "\n";
	cout << add(5,6,7) << "\n";
	cout << add(5.1,6.1) << "\n";
	const char *a = "Hello";
	const char *b = "World";
	cout << add(a,b) << "\n";
	return 0;
}
