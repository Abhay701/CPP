#include <iostream>
using namespace std;
int main()
{
    int x = 4534563;
    string s = to_string(x);
    cout << "Length: " << s.length() << endl;
    s = s + "ddi";
    s += " qwerty";
    cout << s << endl;

    string str = "466879";
    cout << str << endl;
    int y = stoi(str);
    cout << y<<endl;
    cout << y+2<<endl;
}