#include<iostream>
using namespace std;
class Node{ // DLL Node
    public:
        int val;
        Node* next;
        Node* prev; // extra for DLL
        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL; // extra for DLL

        }
    };

class DLL{ // User defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail; // extra
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size)  cout<<"Invalid Index"<<endl;
        else if(idx==0)  insertAtHead(val);
        else if(idx==size)  insertAtTail(val);
        else {
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1; i<=idx-1; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp; // extra
            t->next->prev = t;   // extra
            size++;
        }
    
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i=1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }  
    }
    void deleteAthead(){
        if(size==0){
            cout<<"List is Empty!";
            return;
        }
        head = head->next;
        if(head) head->prev = NULL;
        if(head==NULL) tail = NULL;
        head->prev = NULL;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is Empty!";
            return;
        }
        else if(size==1){
            deleteAthead();
            return;
        }
        Node*temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;

    }

};
int main(){
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.display();
    list.insertAtTail(50);
    list.display();
    list.insertAtIdx(2,60);
    list.display();

    
}