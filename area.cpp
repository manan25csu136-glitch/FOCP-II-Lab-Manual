#include<iostream>
using namespace std;

class Rectangle{
float length;
float width;
public:

void inputDimensions(){
    cout<<"Enter Length";
    cin>>length;
    cout<<"Enter Width";
    cin>>width;    
}
int calculateArea(){
    return(length*width);
}
int calculatePerimeter(){
    return(2*(length+width));
}
void displayDetails(){
    cout<<"Length: "<<length<<" Width: "<<width;
    cout<<" Area: "<<calculateArea()<<" Perimeter: "<<calculatePerimeter()<<endl;
}
};

int main(){
    Rectangle r1;
    r1.inputDimensions();
    r1.displayDetails();
    return 0;
}