#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a first number";
    cin>>a;

    int b;
    cout<<"Enter a Second number";
    cin>>b;

    int c;
    cout<<"Enter a first number";
    cin>>c;

    if(a > b){
        if(a > c){
            cout<<a<<"Greater than A";
        }
        else{ // c > a, a > b -> c>a>b;
            cout<<c<<"is greatest";
        }

    }
    if(b > a){
        if(b > c){
            cout<<b<<"Greater than B";
        }
        else{ // c > b, b > a -> c>b>a;
            cout<<c<<"is greatest";
        }  
    }
        else{ // c > b > a 
            cout<<c<<" is Greatest c";
        }
}