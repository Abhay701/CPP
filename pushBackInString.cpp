#include<iostream>
using namespace std;
int main(){
    string s="raghav";
    cout<<s<<endl;
    s.pop_back();
    s.push_back('a');
    cout<<s<<endl;
    s.push_back('b');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    s.append(" kumar"); // Adds " kumar" 
    cout<<s<<endl;
    s.clear();
    cout<<"Cleared: "<<s<<endl;
    cout<<"Length of cleared String: "<<s.length()<<endl;

}