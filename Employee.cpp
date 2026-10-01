#include<iostream>
#include<string>
using namespace std;

class Employee
{
  private:
  int employee_id;
  string employee_name;
  float basic_salary;
  float bonus;
  float total_salary;
  public:
 
  Employee()
  {
    employee_id=0;
    employee_name="Unknown";
    basic_salary=0;
    bonus=0;
    total_salary=0;
    cout<<"The Default Constructor"<<endl;
  }
 
  Employee(int id, string n, float s, float b)
  {
    employee_id=id;
    employee_name=n;
    basic_salary=s;
    bonus=b;
  }
    void calculate()
    {
       total_salary=basic_salary+bonus;
    }
  

  void display()
  {
    cout<<"\nThe Employee ID is:"<<employee_id;
    cout<<"\nThe Employee Name is:"<<employee_name;
    cout<<"\nThe Salary of Employee is:"<<basic_salary;
    cout<<"\nThe bonus given is:"<<bonus;
    cout<<"\nThe total salary is:"<<total_salary;
  }
};
int main()
{
  Employee e1;
  e1.display();
  Employee e2(50, "Unnati", 45800.20, 20000.00);
  e2.display();
  return 0;
}
