#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<string> &v)
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
    vector<string> v;
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x;
        cout << "Enter " << i + 1 << "th: ";
        cin >> x;
        v.push_back(x);
    }
    printVec(v);
}