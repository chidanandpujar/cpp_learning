#include <iostream>
using namespace std;
class X {
        int a;
        int b;
        char *p;
        public:
        X() {
                cout << "constructor \n";
                a=5; b=1;
                p = new char [10];
                p[0] = 'a', p[1] = 'b'; p[2] = 'c';
        }
        void deldyn() { delete p; }
        void printabp() {
                cout << a << "\n";
                cout << b << "\n";
                cout << p << "\n";
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
