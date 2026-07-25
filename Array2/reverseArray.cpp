#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter a size : ";
    cin>>n;

    cout<<"Enter a element : ";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int i=0;
    int j=v.size()-1;
    while(i<=j){
        // swap v[i] and v[j]

        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
        
    }
    for(int k=0; k<v.size(); k++){
        cout<<v[k]<<" ";
    }
   

}