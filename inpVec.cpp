#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> v)
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i]<<" ";
        // or
        cout << v.at(i) << " ";
    }
}

int main()
{
    vector<int> v;
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter " << i + 1 << "th value: ";
        cin >> x;
        v.push_back(x);
        // printVec(v);
    }
    printVec(v);
}