#include <iostream>

using namespace std;

int fattoriale(int x) {
    int res = 1;
    for (int i = 2; i <= x; i++)
    {
        res *= i;
    }
    return res;    
}


int main() {
    int n = fattoriale(5);
    cout << "Fattoriale di 5 e " << n;    
    return 0;
}