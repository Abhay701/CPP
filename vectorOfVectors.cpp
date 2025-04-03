// Array of vectors
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &v)
{
    cout << "sizeof vector: " << v.size() << endl;
    for (int j = 0; j < v.size(); j++)
    {
        cout << v.at(j) << " ";
    }

    cout << endl;
}

int main()
{
    vector<vector<int>> v; // Vector of vectors
    int N;
    cout << "How many vectors you want to store in this vector: ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "How many elements you want to enter in " << i + 1 << "th vector: ";
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++) // Pushing elements in jth vector
        {
            int n;
            cout << "Push element in  " << i + 1 << "th vector: ";
            cin >> n;
            temp.push_back(n);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        printVector(v[i]); // ith vactor
    }
}