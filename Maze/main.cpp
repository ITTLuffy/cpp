#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

const char WALL = '#';
const char PATH = ' ';
const char PLAYER = 'P';
const char EXIT = 'E';

vector<string> map = {
    "###########",
    "#     #   #",
    "### # # # #",
    "#   #   #E#",
    "###########"
};

int px = 1, py = 1;

void draw() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

    for (const auto& row : map)
        cout << row << endl;
}

bool movePlayer(int dx, int dy) {
    int nx = px + dx;
    int ny = py + dy;

    if (map[ny][nx] == WALL)
        return false;

    bool atExit = map[ny][nx] == EXIT;

    map[py][px] = PATH;
    px = nx;
    py = ny;

    if (!atExit)
        map[py][px] = PLAYER;

    return atExit;
}

int main() {
    bool gameOver = false;
    map[py][px] = PLAYER;
    draw();

    while (!gameOver) {
        char input = _getch();

        switch (input) {
            case 'w': gameOver = movePlayer(0, -1); break;
            case 's': gameOver = movePlayer(0, 1); break;
            case 'a': gameOver = movePlayer(-1, 0); break;
            case 'd': gameOver = movePlayer(1, 0); break;
            case 'q': return 0; // uscita manuale
        }

        draw();
    }

    cout << "\n🏁 Hai raggiunto l'uscita! Complimenti!\n";
    return 0;
}
