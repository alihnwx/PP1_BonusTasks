#include <iostream>
using namespace std;

int main() {
    int rookX, rookY, figureX, figureY;
    cin >> rookX >> rookY >> figureX >> figureY;
    
    if (rookX == figureX || rookY == figureY) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}