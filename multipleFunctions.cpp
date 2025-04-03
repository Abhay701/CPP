#include<iostream>
using namespace std;

void usa(){
    cout<<"You are in USA"<<endl;
}
void india(){
    cout<<"You are in india"<<endl;
    usa();
}

int main(){
    india();
}