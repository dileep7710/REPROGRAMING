#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size : ";
    cin>>n;

    int arr[n];
    cout<<"Enter a number : ";

    // input

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the element you want to search";
    cin>>x;

    // search
    // check mark

    bool flag = false;
    for(int i=0; i<n; i++){
        if(arr[i]==x) flag = true;
    }
    if(flag == true) cout<<"Element is found";
    else cout<<"404 Not found";
}