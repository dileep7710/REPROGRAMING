#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    if(n>=100 && n<=999){
        cout<<"T hree digits number";
    }
    else {
        cout<<"not a three digits number";
    }
}