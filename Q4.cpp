#include<iostream>
using namespace std;

int main(){
    int item_no,quantity,unit_price,total,totalfinal;
    float discount;

    cout<<"Enter iTEM No"<<endl;
    cin>>item_no;
    cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    cout<<"Enter unit price"<<endl;
    cin>>unit_price;

    total=quantity*unit_price;
    discount=0.2*total;
    totalfinal=total-discount;
    
    cout<<"Total Billing Amount is = "<<totalfinal<<endl;
}