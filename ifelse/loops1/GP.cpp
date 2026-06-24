#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:-";
    cin>>n;
    int a = 1;            // 1 2 4 8 16 32,........
    for(int i=0; i<=n; i++){
        cout<<a<<endl;
        a = a*2;
    }
}