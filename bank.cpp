#include<iostream>
using namespace std;

class bankaccount{
string accountHolderName;
int accountNumber;
double balance;
public:
void inputDetails();
void displayDetails();
void deposit(double amount);
void withdraw(double amount);

void inputDetails(){
    cout<<"Account Number";
    cin>>accountNumber;
    cout<<"Enter Account Holder Name";
    cin.ignore();
    getline(cin,accountHolderName);
    cout<<"Balance";
    cin>>balance;
}
void displayDetails(){
    cout<<"AccountHolderName: "<<accountHolderName;
    cout<<" Account Number: "<<accountNumber;
    cout<<" Balance: "<<balance<<endl;
}
};
void bankaccount::deposit(double amount){
    balance+=amount;
    cout<<"\n Amount deposited \n Balance="<<balance;
}
void bankaccount::withdraw(double amount){
    if(amount>balance)
    cout<<"\n Denied Insufficient Balance";
    else{
        balance-=amount;
        cout<<"\n Amount Withdraw SUCCESSFUL Remaining Balance: "<<balance;
    }
}

int main(){
    bankaccount b1;
    b1.inputDetails();
    b1.displayDetails();
    char choice;
    cout<<"Enter D for Deposit and W for Withdrawal:"<<endl;
    cin>>choice;
    if (choice=='d' || choice=='D'){
        b1.deposit(5000);
        b1.displayDetails();
    }
    else{
        b1.withdraw(10000);
        b1.displayDetails();
    }
    return 0;
}