#include<iostream>
using namespace std;

int main(){
    int n,greatest=0;
    char choice;
    cout<<"enter sales: "<<endl;
    do{
        cin>>n;
        if (n>greatest){
            greatest = n;
        }
        cout<<" want to enter more?"<<endl;
        cin>>choice;
    }while(choice=='y'|| choice=='Y');

    cout<<"greatest sales Figure= "<<greatest<<endl;

    return 0;

}