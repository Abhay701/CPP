#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter a number: ";
    cin>>m;

    // cout<<1<<" ";

    for (int i = 1; i <= m+1; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            if ((i+j)%2==0)
            {
            cout<<1<<" ";

            }
            else{
            cout<<0<<" ";
            }
        }
        cout<<endl;
        
    }
    
}