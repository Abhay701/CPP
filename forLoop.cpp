#include<iostream>
using namespace std;
int main(){
    // for (int i = 1; i <=100; i++)
    // {
    //     cout<<"Abhay@-"<<i<<endl;
    // }

    for (int i = 0; i <= 100; i++)
    {
        if (i%2==0)
        {
            cout<<i<<endl;
        }
        
    }

    // Better Approach

    for (int i = 0; i <=100; i=i+2)
    {
            cout<<i<<endl;
    }
    
    

}