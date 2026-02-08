#include<iostream>
using namespace std;

int main(){
    int p1,p2,p3;

    cout<<"Enter Score of 1st PLAYER"<<endl;
    cin>>p1;
    cout<<"Enter Score of 2nd PLAYER"<<endl;
    cin>>p2;
    cout<<"Enter Score of 3rd PLAYER"<<endl;
    cin>>p3;

    if(p1>p2 && p1>p3){
        cout<<"Winner is PLAYER 1"<<endl;
    }
    else if(p2>p1 && p2>p3){
        cout<<"Winner is PLAYER 2"<<endl;
    }
    else if(p3>p1 && p3>p2){
        cout<<"Winner is PLAYER 3"<<endl;
    }

    return 0;
}