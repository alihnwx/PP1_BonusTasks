#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int h, a, b;
    cin >> h >> a >> b;
    cout << ceil(static_cast<double>(h - a) / (a - b)) + 1 << endl;
    return 0;
}
