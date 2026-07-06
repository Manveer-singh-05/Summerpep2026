#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = nullptr;
    }
};
Node* createnode(Node* head , int m){
    if(head==nullptr){
        Node* newNode = new Node(m);
        head = newNode;
        return head;
    }
    Node* temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    Node* newNode = new Node(m);
    temp->next = newNode;
    return head;
}
Node* print(Node* head){
    if(head==nullptr){
        return nullptr;
    }
    Node* temp= head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    int n;
    cin>>n;
    Node* head = nullptr;
    while(n--){
        int m;
        cin>>m;
       head =  createnode(head,m);
    }
    print(head);

}