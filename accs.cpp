#include <iostream>
using namespace std;
class Test {
	private :
		int pvt;
	protected:
		int prot;
	public:
		void pub() {
			cout << "Public\n";
		}
};

int main()
{
	Test ts;
	ts.pvt = 5;
	ts.prot = 10;
	ts.pub();
	return 0;
}
