// Program to swap two numbers

#include <iostream>

using namespace std;

int main() {
    int n1 = 10;
    int n2 = 5;
    int temp;

    cout << "Value of n1 " << n1 << endl;
    cout << "Value of n2 " << n2 << endl;
    // PASSAGGIO PER VALORE
    temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "Value of n1 " << n1 << endl;
    cout << "Value of n2 " << n2 << endl;


    return 0;
}