#include <iostream>

using namespace std;

int somma(int a, int b) {
    return a + b;
}

int sottrazione(int a, int b) {
    return a - b;
}

int moltiplicazione(int a, int b) {
    return a * b;
}

double divisione(int a, int b) {
    if (b != 0 && a != 0) {
        return a / b;
    } else {
        return b / a;
    }
}

int main() {
    char scelta;
    int n1, n2;
    cout << "Inserisci l'operazione che vuoi effettuare: +, -, /, * ";
    cin >> scelta;
    cout << "Inserisci il primo numero: ";
    cin >> n1;
    cout << "Inserisci il secondo numero: ";
    cin >> n2;

    int risultato;

    switch (scelta)
    {
    case '+':
        risultato = somma(n1, n2);
        break;
    case '-':
        risultato = sottrazione(n1, n2);
        break;
    case '*':
        risultato = moltiplicazione(n1, n2);
        break;
    case '/':
        risultato = divisione(n1, n2);
        break;
    
    default:
        cout << "Ocio, hai inserito qualcosa di non valido";
        break;
    }

    cout << "Risultato: " << risultato << endl;

    return 0;
}