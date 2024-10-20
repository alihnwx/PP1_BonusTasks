#include <iostream> 
using namespace std;

int main(){
    int prog, user;
    cin>>prog>>user;
    if((prog!=1 & user!=1)||(prog==1 & user==1)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}