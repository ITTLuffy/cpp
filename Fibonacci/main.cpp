#include <iostream>
#include <vector>

using namespace std;

// Genera i primi 'x' numeri di Fibonacci
vector<int> fibonacci(int x) {
    vector<int> seq;

    if (x >= 1) seq.push_back(0);
    if (x >= 2) seq.push_back(1);

    for (int i = 2; i < x; i++) {
        int next = seq[i - 1] + seq[i - 2];
        seq.push_back(next);
    }

    return seq;
}

int main() {
    int quanti = 10;
    vector<int> risultato = fibonacci(quanti);

    cout << "Sequenza di Fibonacci (" << quanti << " elementi):\n";
    for (int num : risultato) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
