#include<iostream>
using namespace std;

void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<"Swapped: "<<*x<<", "<<*y;
}

// Without using extra variable
// void swap(int* x,int* y){
//     *x=*x+*y;
//     *y=*x-*y;
//     *x=*x-*y;
//     cout<<"Swapped: "<<*x<<", "<<*y;
// }


int main(){
    int a,b;
    cout<<"Enteer first number: ";
    cin>>a;
    cout<<"Enteer second number: ";
    cin>>b;
    swap(&a,&b);
    
}