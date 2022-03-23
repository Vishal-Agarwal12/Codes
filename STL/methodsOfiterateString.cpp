#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Mango";

    //Iterate over all character of a string using for loop
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << " ";
    }

    cout << endl;

    //Iterate a String using Iterator
    for (auto it = s.begin(); it != s.end(); it++)
    { //auto==string::iterator
        cout << (*it) << " ";
    }

    cout << endl;

    //Iterate using For Each loop
    for (auto c : s)
    {                     // auto==char . This line means for all the character c in string s
        cout << c << " "; // print c
    }

    return 0;
}