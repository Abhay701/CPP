#include <iostream>
#include <algorithm> // for std::reverse
using namespace std;
int main()
{
    string s = "raghav";
    cout << s << endl;
    int n = s.length(); // n=6

    // int i = 0;
    // int j = n/2 - 1;
    // while (i < j)
    // {
    //     int temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;
    // }

    // or

    reverse(s.begin(), s.begin() + n / 2);

    cout << s << endl;
}