#include<iostream>
using namespace std;

class Person
{
  private:
  int age;

  public:

  void eat()
  {
    cout<<"The person is eating."<<endl;
  }
};

class Doctor:public Person
{
  public:
  
  void eat()
  {
    cout<<"The doctor is eating."<<endl;
  }
};

int main()
{
  Person p;
  p.eat();
  Doctor d;
  d.eat();
}
