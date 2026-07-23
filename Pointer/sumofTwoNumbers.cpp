#include<iostream>
using namespace std;
int main(){
    int x, y;
    int* p1 = &x;
    int* p2 = &y;
    cout<<"Enter a number :-";
    cin>>*p1;

    cout<<"Enter a number :-";
    cin>>*p2;
    cout<<*p1+*p2;
}