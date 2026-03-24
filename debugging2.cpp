#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 2, 3, 1};
    for (int i = 0; i < 5; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
                break;
        }
        if (j < i)
            continue;

        int count = 0;

        for (int k = 0; k < 5; k++)
        {
            if (arr[i] == arr[k])
                count++;
        }
        cout << arr[i] << " occurs " << count << " times\n";
    }
    return 0;
}