#include<iostream>
using namespace std;

class Person
{
  public:
  int age;
  string name;

  void getdata()
  {
    cout<<"\nEnter the age:"<<endl;
    cin>>age;

    cout<<"\nEnter the name:"<<endl;
    cin>>name;
  }

  void display()
  {
    cout<<"\nThe age is:"<<name;
    cout<<"\nThe name is:"<<age;
  }
};

class Student:public Person
{
  public:
  int rollno;
  float marks;

  void accept()
  {
    cout<<"\nThe roll number is:"<<endl;
    cin>>rollno;

    cout<<"\nThe marks are:"<<endl;
    cin>>marks;
  }

  void display1()
  {
    cout<<"\nThe roll number is:"<<rollno;
    cout<<"\nThe marks are:"<<marks;
  }
};

int main()
{
  Student p;
  p.getdata();
  p.display();
  p.accept();
  p.display1();
  return 0;
}
