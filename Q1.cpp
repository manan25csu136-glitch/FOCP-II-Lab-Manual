#include<iostream>
using namespace std;
int main()
{
    int marks1,marks2,marks3;

    cout<<"the marks of student1"<<endl;
    cin>>marks1;
    cout<<"the marks of student2"<<endl;
    cin>>marks2;
    cout<<"the marks of student3"<<endl;
    cin>>marks3;
    float average;
    average=((marks1+marks2+marks3)/3.0);
    cout<<"average="<<average<<endl;
    return 0;
}