#include <iostream>
#include <algorithm> // for std::reverse
using namespace std;
int main()
{
    string s = "Abhay";
    cout << s << endl;
    int n = s.length();

    // Reverse String
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout << s << endl;

    // or using in-built reverse

    reverse(s.begin(), s.end());
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
}