#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    cout << ceil(static_cast<double>(m) / n) << endl;
}