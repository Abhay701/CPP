#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string text = "Abhay1 kumar is2 a 3good boy4";
    stringstream stream(text);
    string word;

    // Define a 1D vector to hold words
    vector<string> str;

    // Read each word from the stream and store it in the vector
    while (stream >> word)
    {                        // check if it extracts all of texts in word or not.
        str.push_back(word); // Add each word to the vector
    }

    // or
    // for (; stream >> word;)
    // {
    //     str.push_back(word); // Add each word to the vector
    // }

    // Display each word
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
    }
}
