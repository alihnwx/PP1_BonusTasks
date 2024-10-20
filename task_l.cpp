#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int hours = n / 3600; // количество часов
    int minutes = (n % 3600) / 60; // количество минут
    int seconds = n % 60; // количество секунд
    cout<<hours<<":"<<minutes<<":"<<seconds;
}