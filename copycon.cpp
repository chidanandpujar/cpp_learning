#include <iostream>
using namespace std;
class Copycon {
	int a;
	int b;

	public:
	Copycon() { a=5; b=10; };
	Copycon(Copycon &cp) {
		a = cp.a;
		b = cp.b;
	};
	void showab() {
		cout << "a=" << a << "\n";
		cout << "b=" << b << "\n";
	};
};

int main()
{
	Copycon c1;
        Copycon c2(c1);	
	c1.showab();
	c2.showab();
	return 0;
}
