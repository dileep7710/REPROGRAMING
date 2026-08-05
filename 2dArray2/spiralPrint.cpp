#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter row of no : ";
    cin>>m;

    int n;
    cout<<"Enter columns of no : ";
    cin>>n;

    int arr[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // spiral
    int minr = 0, minc = 0;
    int maxr = m-1, maxc = n-1;
    int tne = n*m;
    int count = 0;
    while(minr<=maxr && minc<=maxc){
        // right
        for(int j=minc; j<=maxc; j++){
            cout<<arr[minr][j]<<" ";
            count++;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        // down
        for(int i = minr; i<=maxr; i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;

        // left

        for(int j=maxc; j>=minc; j--){
            cout<<arr[maxr][j]<<" ";
            count++;
        }
        maxr--;
        // up
        for(int i=maxr; i>=minr; i--){
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
    }
    
    
}