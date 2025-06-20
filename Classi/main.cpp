#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    string titolo;
    string autore;
    int anno;

public:
    Libro(string t, string a, int y) {
        titolo = t;
        autore = a;
        anno = y;
    }

    void stampaInfo() {
        cout << "Titolo: " << titolo << endl;
        cout << "Autore: " << autore << endl;
        cout << "Anno di pubblicazione: " << anno << endl;
    }

    void modificaTitolo(string nuovoTitolo) {
        titolo = nuovoTitolo;
        stampaInfo();
    }
};


int main() {
    Libro l1("Signore degli Anelli", "Tolkien", 1921); 
    l1.stampaInfo();


    return 0;
}