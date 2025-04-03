#include<iostream>
using namespace std;

int factorial(int t){
    int f=1;
    for (int i = 1; i <=t; i++)
    {
        f*=i;
    }
    return f;
}

int nCr(int x,int y){
    int output;
    output=factorial(x)/(factorial(y)*factorial(x-y)); // nCr formula applied!
    return output;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for (int i = 0; i <=n; i++)
    {

        for (int k = 0; k <=n-i+1; k++)
        {
            cout<<"  ";
        }
        

        for (int j = 0; j <=i; j++)
        {
            cout<<nCr(i,j)<<"   ";
        }
        cout<<endl;

    }
    
}