#include<iostream>
using namespace std;

int main(){
    int temp,a=20,b=10;

    cout<<"Before Swapping"<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;


    temp=a;
    a=b;
    b=temp;
    
    cout<<"After Swapping"<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;


    return 0;
}