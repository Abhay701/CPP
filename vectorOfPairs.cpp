#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<pair<int, int>> &v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second;
        cout << endl;
    }
}

int main()
{
    vector<pair<int, int>> v = {{1, 2}, {2, 3}, {4, 5}};
    // vector<pair<int, int>> v;
    printVector(v);
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cout << "Enter " << i + 1 << " th pair: ";
        cin >> x >> y;
        // v.push_back({x, y});
        // or
        v.push_back(make_pair(x, y));
    }
    printVector(v);
}