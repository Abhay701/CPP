#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum=0;
    while (n!=0)
    {
        int id=n%10; //stores the last digit of a number
        n/=10; //or n=n/10
        sum+=id;
    }
    cout<<sum;
    
}