#include <iostream>
class base {
  private: int pvtb;
  protected: int protb;
  public:
    viod pubb()
    {
      std::cout << "Pubb\n";
    }
};

class dervived : protected base
{
  public:
    void pubd()
    {
      std:cout << "pubd\n";
    }
 };

int main()
{
  derived d1;
  std::cout << d1.pvtb; //error
  std::cout << d1.protb; //error
  d1.pubb();  //error
  d1.pubd();  //ok runs
  return 0;
}
