#include <iostream>
#include <climits> // Include this header for INT_MAX and INT_MIN
using namespace std;
int main()
{
    int arr[] = {2, 5, 9, 6, 4, 7, 8, 14, 12};
    int mx = INT_MIN; // stores minimum value of integer that integer can store
    for (int i = 0; i < (sizeof(arr) / 4); i++)
    {
        mx = max(mx, arr[i]);
    }

    int secondMax = INT_MIN; // stores minimum value of integer that integer can store
    for (int j = 0; j < (sizeof(arr) / 4); j++)
    {
        if (arr[j] != mx) secondMax = max(secondMax, arr[j]);
    }

    cout << "Max = " << mx << endl;
    cout << "Second Max = " << secondMax << endl;
}