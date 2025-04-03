// #include<iostream>
// using namespace std;
// int main(){
//     int n1;
//     cin>>n1;
//     char op;
//     cin>>op;
//     int n2;
//     cin>>n2;
//     if(op=='+') cout<<n1+n2;
//     if(op=='-') cout<<n1-n2;
//     if(op=='*') cout<<n1*n2;
//     if(op=='/') cout<<n1/n2;
// }


#include<iostream>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    char op;
    cin>>op;
    int n2;
    cin>>n2;

    switch (op)
    {
    case '+':
    cout<<n1+n2;
        break;
    
    case '-':
    cout<<n1-n2;
        break;

    case '*':
    cout<<n1*n2;
        break;

    case '/':
    cout<<n1/n2;
        break;

    default:
    cout<<"Invalid Operator!";
        break;
    }

    if (n1==n2); //valid statement
    
}


