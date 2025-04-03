#include<iostream>
using namespace std;
int main(){
    string s="Abhay";
    cout<<s<<" "<<s.length()<<endl;
    s=s+" Kumar";
    cout<<s<<" "<<s.length()<<endl;
    s="Kumar "+s;
    cout<<s<<" "<<s.length()<<endl;

}