#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    arr[0][0]=6;
    arr[0][1]=1;
    arr[0][2]=3;
    arr[1][0]=5;
    arr[1][1]=2;
    arr[1][2]=8;
    for (int i = 0; i <=1; i++)
    {
        for (int j = 0; j <=2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}