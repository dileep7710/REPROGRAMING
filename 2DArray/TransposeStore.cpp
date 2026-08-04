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

    cout<<"\n";

    for(int i=0; i<m; i++){ //rows
        for(int j =0; j<n; j++){ // col
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n";

    // store the transpose
    int t[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            t[i][j] = arr[j][i];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}