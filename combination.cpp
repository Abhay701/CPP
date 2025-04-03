#include<iostream>
using namespace std;

int factorial(int x){
    int f=1;
    for (int i = 1; i <=x; i++)
    {
        f*=i;
    }
    return f;
}

int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    int output;
    // int a=1;
    // for (int i = 1; i <=n; i++)
    // {
    //     a*=i;
    // }  
    // int b=1;
    // for (int i = 1; i <=r; i++)
    // {
    //     b*=i;
    // }
    // int c=1;
    // for (int i = 1; i <=(n-r); i++)
    // {
    //     c*=i;
    // }
    // output=a/(b*c); // nCr=!n/(!r*!(n-r)

    output=factorial(n)/(factorial(r)*factorial(n-r));

    cout<<"nCr = "<<output;
    
}