#include <iostream>
using namespace std;

int main() {
    int v, t;
    cin >> v >> t;

    int total_distance = v * t;
    int position = (total_distance % 109 + 109) % 109;  

    cout << position << endl;

    return 0;
}
