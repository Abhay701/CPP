// Make a function which calculates a raised to the power b using recursion
#include<iostream>
using namespace std;

int power(int a,int b){
    if (b == 0) return 1;  // Base case: a^0 = 1
    if (b == 1) return a;  // Base case: a^1 = a
    return a * power(a, b - 1);  // Recursive case
}

int main(){
    int a,b;
    cout<<"Enter base: ";
    cin>>a;
    cout<<"Enter power: ";
    cin>>b;
    cout<<power(a,b);
}