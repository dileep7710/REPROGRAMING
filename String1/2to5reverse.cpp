#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s = "Dileep";
    reverse(s.begin()+1, s.end());
    cout<<s;
}