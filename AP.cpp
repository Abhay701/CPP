#include<iostream>
using namespace std;
int main(){
    int n;
    int a1=1,d=2;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<a1+(i-1)*d<<" ";
    }
    
}