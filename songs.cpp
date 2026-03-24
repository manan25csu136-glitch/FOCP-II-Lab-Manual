#include <iostream>
using namespace std;

int main() {
    int N, a[1000] = {0}, x, max = 0, fav = 0;
    cin >> N;
    while (N--) {
        cin >> x;
        a[x]++;
        if (a[x] > max) 
		max = a[x];
    }
    for (int i = 0; i < 1000; i++)
        if (a[i] == max) fav++;
    cout << fav;
	return 0;
}