#include <iostream>
using namespace std;
class A {
  private: int pvta;
  protected: int prota;
  public:
    void puba()
    {
      std::cout << "puba" << "\n";
    }
};

class B : public A
{
  public:
      void pubb()
      {
        std::cout << "pubb" << "\n";
      }
 };

int main()
{
  B b1;
  b1.puba();
  b1.pubb();
  return 0;
}
