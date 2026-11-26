#include<iostream>
using namespace std;

class Calculator
{
  private:
  int num;

  public:
  
  int add(int a, int b)
  {
    return a+b;
  }

  int add(int a, int b, int c)
  {
    return a+b+c;
  }
};

  int main()
  {
    Calculator cal;
    cout<<"\nAddition of a+b is:"<<cal.add(5,8);
    cout<<"\nAddition of a+b+b is:"<<cal.add(8,6,10); 
    return 0;
  }
