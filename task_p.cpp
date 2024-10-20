#include <iostream>
using namespace std;

int main(){
    int h1, m1, s1;
    cin>>h1>>m1>>s1;
    int h2, m2, s2;
    cin>>h2>>m2>>s2;
    int h_arr=(h2-h1)*3600;
    int m_arr=(m2-m1)*60;
    int s_arr=(s2-s1);
    cout<<h_arr+m_arr+s_arr;
}