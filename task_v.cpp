#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int max_value = a - ((a - b) * (a - b)) / ((a - b) + 1);
    cout << max_value << endl;

    return 0;
}
