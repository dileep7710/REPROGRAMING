#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,4,3,2,1};
    int n = 5;
    bool flag = true;
    // for(int i=0; i<n; i++){
    //     if(arr[i]>arr[i+1]){
    //         flag = false;
    //         break;
    //     }
    // }
    // if(flag == true) cout<<"sorted";
    // else cout<<"Unsorted";

    for(int i=0; i<n-1; i++){ // n-1 passes
        // traverse
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = false;
            }
        }
        if(flag==true){ //swap didn't happen
            break;
        }
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}
