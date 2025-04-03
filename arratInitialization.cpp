#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // declaration
    cout<<"Size = "<<sizeof(arr)/4<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout<<"Reverse order: "<<endl;
        for (int i = 4; i >=0; i--) 
    {
        cout << arr[i] << " ";
    }
}