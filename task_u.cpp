#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    cout << (n % m == 0 || m % n == 0) << endl;

    return 0;
}
