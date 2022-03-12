#include <iostream>
using namespace std;
clas Test {
    int a;
    public:
      Test() { a = 0; }
    viod operator ++ () { a = a + 1; }
    void show_a() { cout << "a = " << a << "\n"; }
};
    
int main()
{
  Test t1;
  t1.show_a();
  t1++;
  t1.show_a();
  t1++;
  t1.show_a();
  return 0;
}
  
