#include<iostream>
using namespace std;
void fun(int i, int n){
    if(i>n) return;

    cout<<i<<" ";
    fun(i+1,n);
    if(i>1) cout<<i-1<<" ";
}
int main(){
    fun(1,4);
}