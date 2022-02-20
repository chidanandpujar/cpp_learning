#include <iostream>
using namespace std;
int main()
{
        int *ip;
        ip = new (nothrow) int [5];
        if ( ip == nullptr) {
                cout << "Error" << "\n";
        }
        else {
                cout << "Memory allocation successful" << "\n";
        }
        return 0;
}
