#include<iostream>
using namespace std;
int main(){
    char ch='\0';
    cout<<ch<<endl; // It does not prints
    cout<<(int)ch<<endl; // It prints ASCII value of null character(\0)

    int x=0;
    cout<<(char)x; // it is '\0' that not prints

}