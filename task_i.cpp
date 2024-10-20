#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int digit1=num/100;
    int digit2=(num%10)/10;
    int digit3=num%10;
    cout<<digit1+digit2+digit3;
}