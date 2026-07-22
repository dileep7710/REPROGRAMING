#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter numbers : ";
    cin>>a>>b;
    int temp = a;
    a = b;
    b = temp;
    cout<<"a"<<":-"<<a<<","<<b<<"b"<<":-";
}