#include <iostream>
using namespace std;
class A {
	private:
		int a;
	public:
		A() {
			a = 0;
		}
		A(int i) {
			a = i;
		}
		void ShowA()
		{
			cout << "a=" << a << "\n";
		}
	};
int main()
{
	A a1;
	a1.ShowA();
	A a2(107);
	a2.ShowA();
	return 0;
}
