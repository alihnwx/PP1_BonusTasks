#include <iostream>
using namespace std;

int main(){
    int rub, cop, pir;
    cin>>rub>>cop>>pir;
    rub=rub*pir;
    cop=cop*pir;
    if(cop>100){
        rub=rub+(cop/100);
        cop=cop%100;
    }
    cout<<rub<<" "<<cop;
}