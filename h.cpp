#include <iostream>
using namespace std;

int main() {
    int bishopX, bishopY, figureX, figureY;
    cin >> bishopX >> bishopY >> figureX >> figureY;
    
    if (abs(bishopX - figureX) == abs(bishopY - figureY)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}