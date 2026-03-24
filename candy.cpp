#include<iostream>
using namespace std;

class Candy{
    string color;
    int points;
    public:
    Candy(); //constructor
    Candy(string clr);  //parametarised
    Candy(string clr,int);  //parametarised
    void loose_Candy();
    void loose_Candy(int);
    void gain_Candy();
    void gain_Candy(int);
    void setCandy(string,int);
    void displayCandy();

};
Candy::Candy(){
    color="Black";
    points=0;
}
Candy::Candy(string clr){
    color=clr;
    points=0;
}
Candy::Candy(string clr,int pts){
    color=clr;
    points=pts;
}
void Candy::setCandy(string c,int p){
    color=c;
    points=p;
}
void Candy::loose_Candy(int loose_candy){
    points -= loose_candy; 
}

void Candy::gain_Candy(int gain_candy){
    points += gain_candy;    
}

void Candy::displayCandy(){
    cout<<"Color: "<<color<<endl;
    cout<<"Points: "<<points<<endl;
}

int main(){
    Candy c1,c2("Red",35);
    //c1.setCandy("Red",35);
    //c2.setCandy("Blue",40);
    c1.displayCandy();
    c1.loose_Candy(10);
    c1.displayCandy();
    return 0;
}