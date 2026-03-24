#include<iostream>
using namespace std;
int main()
{
    int num[5];
    int evensum=0;
    int oddsum=0;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter the number"<<i+1<<": ";
        cin>>num[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (num[i]%2==0)
        {
            evensum = evensum + num[i];
        }
        else
        {
            oddsum = oddsum + num[i];
        }
    }
    cout<<"Sum of even numbers:"<<evensum<<endl;
    cout<<"Sum of odd numbers:"<<oddsum<<endl;
    
    return 0;
}