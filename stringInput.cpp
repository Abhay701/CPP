#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string ";
    // cin>>s; // when we take input any string with spaces then, the string before space printed only that has no space in between
    getline(cin,s);
    cout<<s;

}