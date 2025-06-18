#include <iostream>

using namespace std;

int main() {
    char operazione; // variabile per leggere operazione +, +, *, /
    double num1, num2, risultato; // variabili per i due numeri
    cout << "Inserisci l'operazione (+, -, *, /): "; // output per l'utente
    cin >> operazione;
    cout << "Inserisci il primo numero: ";
    cin >> num1;
    cout << "Inserisci il secondo numero: ";
    cin >> num2;
    
    switch(operazione) {
        case '+':
        risultato = num1 + num2;
        break;
        case '-':
        risultato = num1 - num2;
        break;
        case '*':
        risultato = num1 * num2;
        break;
        case '/':
            if (num2 != 0)
                risultato = num1 / num2;
            else {
                cout << "Errore: divisione per zero!" << endl;
                return 1;
            }
            break;
        default:
        cout << "The operator is incorrect, retry" << endl;
        break;
    }
    
    cout << "Il risultato è " << risultato << endl;
    return 0;
}
