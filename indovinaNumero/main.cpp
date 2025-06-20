#include <iostream>
#include <cstdlib> 

using namespace std;

int main() {
    int numero = rand() % 101;
    int tentativi = 1;

    cout << "Indovina il numero tra 0 e 100" << endl;
    int ans;

    while (numero != ans) {
        cout << "Tentativo n. " << tentativi << endl;
        cin >> ans;
        tentativi++;
        if (ans > numero && ans != numero) {
            cout << "Il numero e minore ";
        } else {
            cout << "Il numero e maggiore ";
        }
    }
    cout << "Bravo, hai indovinato il numero in " << tentativi << "tentativi" << endl;


    return 0;
}