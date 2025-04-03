#include<iostream>
using namespace std;

int sum(int x, int y){
    return x+y;
}

int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    int s=sum(a,b);
    cout<<"Sum = "<<s;
    
}