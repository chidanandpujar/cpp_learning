#include <iostream>
using namespace std;
int main ()
{
	int *ip = new int (77);
	cout << "ip vlaue = " << *ip << "\n";
	double *dp = new double (1.2);
	cout << "dp value =" << *dp << "\n";
	int *ia = new int [10];
	ia[0] = 10;
	cout << "ia value =" << ia[0] << "\n";
	return 0;
}
