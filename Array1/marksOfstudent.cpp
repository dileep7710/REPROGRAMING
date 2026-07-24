#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size ";
    cin>>n;
    int marks[n];
    cout<<"Enter a number ";

    //input
    for(int i=0; i<n; i++){
        cin>>marks[i];
    }
    // output 
    for(int i=0; i<n; i++){
        if(35>marks[i]) cout<<i<<" ";
    }

}