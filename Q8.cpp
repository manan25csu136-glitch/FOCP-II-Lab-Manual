#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i=1;i<=n;i++) {
        if(i%3==0 && i%5==0) cout << i << " buzz fuzz" << endl;
        else if(i%3==0) cout << i << " buzz" << endl;
        else if(i%5==0) cout << i << " fuzz" << endl;
        else cout << i << endl;
    }
    return 0;
}