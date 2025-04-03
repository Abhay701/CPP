#include<iostream>
using namespace std;
int main(){
    int x=3,y,z;
    y=x=10;
    z=x<10; //x<10 returns 0, because xis noy less than 10
    cout<<x<<" "<<y<<" "<<z;
}