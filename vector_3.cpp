#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> vec; // Method 1
    // vector<int> vec1={1,2,3}; // Method 2
    // cout<<vec1[0]<<endl;
    // cout<<vec.size()<<endl;
    // cout<<vec1.size()<<endl;

    vector<int> v = {1, 2, 3};
    v.push_back(10);
    v.push_back(9);
    v.push_back(15);

    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;
    cout << v[4] << endl;
    cout << v[5] << endl;
    v[1] = 66;
    cout << endl << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;
    cout << v[4] << endl;
    cout << v[5] << endl;
}
