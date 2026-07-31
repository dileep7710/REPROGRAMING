#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter a row : ";
    cin>>m;

    int n;
    cout<<"Enter a columns : ";
    cin>>n;

    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    // max

    int max = arr[0][0];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(max < arr[i][j]) max = arr[i][j];
        }
    }
    cout<<max;
}