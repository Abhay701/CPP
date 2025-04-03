#include<iostream>
using namespace std;
int main(){
    int arr[5]; // declaration
// arr[0]=9;
// arr[1]=2;
// arr[2]=3;
// arr[3]=4;
// arr[4]=7;
// cout<<arr[0]<<" ";
// cout<<arr[1]<<" ";
// cout<<arr[2]<<" ";
// cout<<arr[3]<<" ";
// cout<<arr[4]<<" ";


for (int i = 0; i < 5; i++)
{
cout<<"Enter "<<i+1<<"th element: ";
cin>>arr[i];
}
for (int i = 0; i < 5; i++)
{
cout<<arr[i]<<" ";
}


}