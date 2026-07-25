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
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> v2(v.size());
    for(int i=0; i<v.size(); i++){
         v2[i] = v[v.size() - 1 - i];
    }

    for(int j=0; j<v2.size(); j++ ){
        cout<<v2[j]<<" ";
    }
    cout<<endl;
    
}