// C++ program to check whether a character is alphabet, digit or special character

#include <iostream>

using namespace std;

int main()
{
    char c;
    cout << "Insert a character" << endl;
    cin >> c;

    if (c >= 48 && c <= 57)
    {
        cout << "This is a digit" << endl;
    }
    else if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
    {
        cout << "This is an alphanet" << endl;
    }
    else
    {
        cout << "This is a special character" << endl;
    }

    return 0;
}