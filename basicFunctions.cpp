#include<iostream>
using namespace std;

void greet(){
    cout<<"Good Morning!"<<endl;
    cout<<"How are you!"<<endl;
}
void usa(){
    cout<<"You are in USA"<<endl;
}
void india(){
    cout<<"You are in india"<<endl;
}

int main(){
    greet();
    cout<<"Hey!"<<endl;
    greet();
    usa();
    india();
}