#include<iostream>
using namespace std;
class Student
{
 public:
 int roll_no;
 string name;
 float marks;

 void accept()
  {
    cout<<"enter your name: ";
    cin>>name;
    cout<<"enter your roll_no.: ";
    cin>>roll_no;
    cout<<"enter your marks: ";
    cin>>marks;
  }
 void resultCalculation()
  {
    if(marks>=40)
      {
         cout<<"result: Pass"<<endl;
      }
    else
      {
         cout<<"result: Fail"<<endl;
      } 
  }
 void display()
  {
    cout<<"rollno: "<<roll_no<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"marks; "<<marks<<endl;
    resultCalculation();
  }
};

int main()
{
 Student s;
 s.accept();
 s.display();
 return 0;
}

