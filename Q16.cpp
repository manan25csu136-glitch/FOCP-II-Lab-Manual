#include <iostream>
using namespace std;
int main() {
    int n, i, flag=0;
    cin >> n;
    for(i=2;i<n;i++) {
        if(n%i==0) {
            flag=1;
            break;
        }
    }
    if(flag==0 && n>1) cout << "prime";
    else cout << "not Prime";
    return 0;
}