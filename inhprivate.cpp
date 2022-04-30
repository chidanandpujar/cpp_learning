#include <iostream>
class baseclass {
  private: int pvtb;
  protected: int protb;
  public:
    void pubb()
    {
      std::cout << "pubb\n";
    }
};

class derived : private baseclass {
    private: int pvtd;
    protected: int protd;
    public:
      void pubd()
      {
        std::cout << "pubd\n";
      }
};

int main()
{
  derived d1;
  std::cout << d1.pvtb; //error
  std::cout << d1.protb; //error
  d1.pubb(); // error
  d1.pubd(); //ok
  std::cout << d1.pvtd; //error
  std::cout << d1.protd; //error
  return 0;
}
