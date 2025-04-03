#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout<<"Displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // WWays to create a vector
    vector<int> vec1; // zero  length integer vector
    vector<char> vec2(4); // 4-element character vector
    // vector<char> vec3(vec2); // 4-element character vector from vec2
    // vector<int> v(6,3); // 6-element vactor of 3's

    // vec2.push_back('5');
    vector <int> vec4(6,13);
    display(vec4);
    cout<<vec4.size();

    return 0;
}