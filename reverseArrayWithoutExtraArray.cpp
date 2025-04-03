// Write a program to reverse array without using extra array
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / 4;
    cout << "arr1 = ";
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    cout << endl;
    cout << "arr1 = ";
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}