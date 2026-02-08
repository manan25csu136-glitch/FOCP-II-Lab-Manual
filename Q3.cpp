#include<iostream>
using namespace std;

int main(){
    float x,c,f;
    char a;
    cout<<" Enter F for Fareinheit or C for Celsius "<<endl;
    cin>>a;
    cout<<"Enter Temperature"<<endl;
    cin>>x;
    
    f=((x*9.0/5.0)+32.0);
    c=((x-32.0)*5.0/9.0);
    if(a=='c' || a=='C'){
        cout<<"Weather in Fareinheit is "<<f<<" F"<<endl; 
    }
    else if(a=='f' || a=='F'){
        cout<<"Weather in Celsius is "<<c<<" C"<<endl;
        }
    else{
        cout<<"Invalid unit"<<endl;
    }
    return 0;
}