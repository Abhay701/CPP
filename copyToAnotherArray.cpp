// Write a program to copy the contents of one array into another array in reverse order
#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr1)/4;
    int arr2[n];
    for (int i = 0; i <=n-1; i++)
    {
        arr2[i]=arr1[n-i-1];
    }
    cout<<"arr1 = ";
    for (int i = 0; i <=n-1; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"arr2 = ";
    for (int i = 0; i <=n-1; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
    
}