#include <iostream>
using namespace std;
int main()
{
        int i=5,j=6,k=7,l;
        l= i + ++j * --k;
        // 5 + 7 * 6
        cout << "l=" << l << "\n"; //prints 47

        l = i-- + j-- * --k;
        // 5 + 7 * 5
        cout << "l=" << l << "\n"; //prints 40
        return 0;
}
