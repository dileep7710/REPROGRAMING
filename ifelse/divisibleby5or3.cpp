#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<"the number is divisible by 3 or 5";
    }

    else{
        cout<<"Not a divisible by 3 or 5 ";
    }

}