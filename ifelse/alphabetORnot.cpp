#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    // a to z -> 97 to 122
    // A to Z -> 65 to 90 

    int ascii = (int)ch;
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=122)){
        cout<<"The character is lowercase alphabet";
    }

    else{
        cout<<"Not a character";
    }
}