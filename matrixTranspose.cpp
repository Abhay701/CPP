// WAP to transpose a matrix
#include<iostream>
using namespace std;
int main(){
    int arr1[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int arr2[3][4];
    for (int i = 0; i <=3; i++)
    {
        for (int j = 0; j <=2; j++)
        {
            arr2[j][i]=arr1[i][j];
        }
        
    }   
    cout<<"arr1:"<<endl;
    for (int i = 0; i <=3; i++)
    {
        for (int j = 0; j <=2; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"arr2 :"<<endl;
    for (int i = 0; i <=2; i++)
    {
        for (int j = 0; j <=3; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    
}