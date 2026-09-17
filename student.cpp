#include<iostream>
#include<string>
using namespace std;
class Student
{
  public:
  int roll_no;
  string name;
  float marks;

  void accept()
  {
    cout<<"Enter your Name: "<<endl;
    cin>>name;
   // cin.ignore();
   // getline(cin, name);

    cout<<"Enter your Roll Number: "<<endl;
    cin>>roll_no;

    cout<<"Enter your Marks: "<<endl;
    cin>>marks;
  }

  void calculateResult()
  {
    if (marks>=40)
    {
      cout<<"Your are pass"<<endl;
    }
    else
    {
      cout<<"Fail"<<endl;
    }
  }

  void display()
  {
    cout<<"\n________Result Declaration______"<<endl;
    cout<<"The name is:"<<name<<endl;
    cout<<"The Roll Number is:"<<roll_no<<endl;
    cout<<"The Marks are:"<<marks<<endl;
    calculateResult();
  }
};

int main()
{
  Student s;
  s.accept();
  s.display();
  return 0;
}
