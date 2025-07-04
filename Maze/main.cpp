#include <iostream>
#include <vector>
#include <conio.h> // per _getch() su Windows
using namespace std;

const char WALL = '#';
const char PATH = ' ';
const char PLAYER = 'P';
const char EXIT = 'E';

vector<string> map = {
    "###########",
    "#P    #   #",
    "### # # # #",
    "#   #   #E#",
    "###########"
};

int px = 1, py = 1; // posizione iniziale del giocatore

void draw() {
    system("cls"); 
    for (const auto& row : map)
        cout << row << endl;
}

bool movePlayer(int dx, int dy) {
    int nx = px + dx;
    int ny = py + dy;

    if (map[ny][nx] == WALL)
        return false;
    if (map[ny][nx] == EXIT) {
        map[py][px] = PATH;
        px = nx; py = ny;
        map[py][px] = PLAYER;
        return true;
    }

    // muove il giocatore
    map[py][px] = PATH;
    px = nx; py = ny;
    map[py][px] = PLAYER;
    return false;
}

int main() {
    bool gameOver = false;
    draw();

    while (!gameOver) {
        char input = _getch(); // legge input da tastiera senza invio

        switch (input) {
            case 'w': gameOver = movePlayer(0, -1); break;
            case 's': gameOver = movePlayer(0, 1); break;
            case 'a': gameOver = movePlayer(-1, 0); break;
            case 'd': gameOver = movePlayer(1, 0); break;
        }

        draw();
    }

    cout << "\n🏁 Hai raggiunto l'uscita! Complimenti!\n";
    return 0;
}
