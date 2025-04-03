#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> &v)
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i]<<" ";
        // or
        cout << v.at(i) << " ";
    }
    v.push_back(7);
    cout << endl;
}

int main()
{
    vector<int> v(5); // this creates vector of integer of size = 5 and initially initializes each position by 0
    v.push_back(6);
    v.push_back(9);
    v.push_back(3);
    printVec(v);
    printVec(v);
    cout << "v.at(8) = " << v.at(8) << endl;
    v.pop_back();
    v.pop_back();
    cout << "After popping last element:" << endl;
    printVec(v);
}