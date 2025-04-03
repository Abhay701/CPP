#include<iostream>
using namespace std;
int main(){
    int x=3;
    int* p; 
    p=&x;
    cout<<x<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<&x<<endl;
    *p=23; // x=23
    cout<<x<<endl;
    cout<<*p<<endl;
}