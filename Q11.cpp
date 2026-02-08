#include <iostream>
using namespace std;
int main() {
    int qty;
    float price, amount, discount;
    cin >> qty >> price;
    amount = qty * price;
    if(qty>1000) {
        discount = amount * 0.1;
        amount = amount - discount;
    }
    cout << amount;
    return 0;
}