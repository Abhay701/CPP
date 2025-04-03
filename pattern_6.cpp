#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter a number: ";
    cin>>m;

    for (int i = 1; i <= m; i++)
    {
        for (int j = m; j >=i; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
}