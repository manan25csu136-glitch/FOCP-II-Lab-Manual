#include <iostream>
using namespace std;
int main() {
    int choice;
    float a,b;
    do {
        cin >> choice;
        if(choice>=1 && choice<=4) {
            cin >> a >> b;
            if(choice==1) cout << a+b << endl;
            else if(choice==2) cout << a-b << endl;
            else if(choice==3) cout << a*b << endl;
            else if(choice==4) cout << a/b << endl;
        }
    } while(choice!=0);
    return 0;
}