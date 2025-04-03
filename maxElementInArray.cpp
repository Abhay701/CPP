#include<iostream>
#include<climits> // Include this header for INT_MAX and INT_MIN
using namespace std;
int main(){
    int arr[]={2,5,9,6,4,7};
    int mx=INT_MIN; // stores minimum value of integer that integer can store
    int mn=INT_MAX; // stores maximum value of integer that integer can store
    for (int i = 0; i < (sizeof(arr)/4); i++)
    {
        // if (arr[i]>=mx)mx=arr[i];
        // or
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);

    }
    cout<<"Max = "<<mx<<endl;
    cout<<"Min = "<<mn<<endl;
    
}