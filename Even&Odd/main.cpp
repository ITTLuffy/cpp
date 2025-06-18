#include <iostream>

using namespace std;

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int num1;
    cout << "Inserisci un numero: ";
    cin >> num1;
    cout << (isEven(num1) ? "Even" : "Odd");

    return 0;
}

