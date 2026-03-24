#include <iostream>
using namespace std;
int main()
{
    float m[10];
    float max = m[0];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the number of items:" << i+1 << ":";
        cin >> m[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (m[i] > max)
        {
            max = m[i];
        }
    }
    cout << "The maximum number is:" << max << endl;
    return 0;
}