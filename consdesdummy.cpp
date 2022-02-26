#include <iostream>
using namespace std;
class Test {
	public:
		Test() 
		{
			cout << "Constructor is called\n";
		}
	
		~Test()
		{
			cout << "Destructor is called\n";
		}
};
int main()

{
	Test t1;
	Test t2;
	return 0;
}
