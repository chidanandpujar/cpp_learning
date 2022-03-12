#include <iostream>
using namespace std;
class X {
	private:
	int a;
	int b;
	char *p;
	public:
		X() {
			a = 5;
			b = 1;
			p = new char [10];
			p[0] = 'a'; p[1] = 'b'; p[2] = 'c'; p[3] = '\0';
		}
		X(X &cp) {
			a = cp.a;
			b = cp.b;
			p = new char [10];
			p[0] = cp.p[0];
			p[1] = cp.p[1];
			p[2] = cp.p[2];
			p[3] = cp.p[3];
		}
	void deldyn() { delete p; }
	void printabp() {
		cout << "a = " << a << "\n";
		cout << "b = " << b << "\n";
		cout << "p = " << p << "\n";
	}
};
int main()
{
	X x1;
	cout << sizeof x1 << "\n";
	X x2 = x1;
	cout << sizeof x2 << "\n";
	x1.printabp();
	x1.deldyn();
	x2.printabp();
	return 0;
}
