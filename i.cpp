#include <iostream>
using namespace std;

int main() {
    int queenX, queenY, figureX, figureY;
    cin >> queenX >> queenY >> figureX >> figureY;
    
    // Проверка на одну строку, один столбец или одну диагональ
    if (queenX == figureX || queenY == figureY || abs(queenX - figureX) == abs(queenY - figureY)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}