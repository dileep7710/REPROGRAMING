#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10); 
    st.push(20); 
    st.push(30); 
    st.push(40); 
    st.push(50);
    // printing in reverse order -> emptying the stack
    // stack<int> temp;
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     int x = st.top();
    //     st.pop();
    //     temp.push(x);
    //}

    // we will use extra stack
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    cout<<endl;
    // putting elements back from temp to set
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        int x = temp.top();
        temp.pop();
        st.push(x);
        
    }
}