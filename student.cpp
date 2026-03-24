#include<iostream>
using namespace std;
class Student 
{ 
    int rollno;string name;int marks1;int marks2; int marks3;
    int calculateTotal()
    {return(marks1+marks2+marks3);}
    public:
    void inputdetails()
    {
        cout<<"Enter roll number: ";
        cin>>rollno;
        cout<<"Enter name: ";cin>>name;
        cout<<"Enter marks in 3 subjects: ";
        cin>>marks1>>marks2>>marks3;
    }
    void displaydetails()
    {
        cout<<"Roll number: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Total marks: "<<calculateTotal()<<endl;
    }
};

int main()
{
    Student s1;
    s1.inputdetails();
    s1.displaydetails();
    return 0;
}
