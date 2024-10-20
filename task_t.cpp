#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int number;
    cin >> number;
    
    string str_num = to_string(number);
    str_num = string(4 - str_num.length(), '0') + str_num; // Дополнение нулями слева

    cout << (str_num[0] == str_num[3] && str_num[1] == str_num[2] ? 1 : 0) << endl;

    return 0;
}
