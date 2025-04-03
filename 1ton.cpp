#include<iostream>
using namespace std;
void print(int n,int m){
    if(n>m)return;
    cout<<n<<endl;
    print(n+1,m);
}
int main(){
    int a;
    cout<<"Enter n: ";
    cin>>a;
    print(1,a);
}