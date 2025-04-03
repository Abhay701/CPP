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
    int N;
    cout << "Enter no. of vectors: ";
    cin >> N;
    vector<int> v[N]; // Array of N vactors
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "How many elements you want to enter in " << i + 1 << "th vector: ";
        cin >> n;
        for (size_t j = 0; j < n; j++)
        {
            int x;
            cout << "Enter " << j + 1 << "th element: ";
            cin >> x;
            v[i].push_back(x); // Pushing element in ith vector
        }
    }
    for (int i = 0; i < N; i++)
    {
        printVector(v[i]); // ith vactor
    }
}