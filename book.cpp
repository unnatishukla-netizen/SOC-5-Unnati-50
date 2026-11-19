#include<iostream>
using namespace std;

class Book
{
  public:
  int bookid;
  string bookname;

  void display()
  {
    cout<<"\nThe Book ID is:"<<bookid;
    cout<<"\nThe Book Name is:"<<bookname;
  }

  Book(int b_id, string b_n)
  {
    bookid=b_id;
    bookname=b_n;
  }

  Book(Book & b)
  {
    bookid=b.bookid;
    bookname=b.bookname;
  }
};

int main()
{
  Book b1(241, "MErchant of Venice");
  Book b2(b1);
  b1.display();
  b2.display();
  return 0;
}
