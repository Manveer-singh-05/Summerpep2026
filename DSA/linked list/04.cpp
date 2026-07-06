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
Node* createatend(Node* head , int m){
    if(head==nullptr){
        Node* newNode = new Node(m);
        head = newNode;
        head->next = head;
        return head;
    }
    Node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    Node* newNode = new Node(m);
    temp->next = newNode;
    newNode->next = head;
    return head;
}

Node* insertathead(Node* head, int m){
    Node* temp = head;
    if(head==nullptr){
        Node* curr  = new Node(m);
        head = curr;
        head->next = head;
        return head;
    }
    while(temp->next!=head){
        temp = temp->next;
    }
    Node* newNode = new Node(m);
    temp->next = newNode;
    newNode->next= head;
    return newNode;
}

Node* print(Node* head){
    if(head==nullptr){
        return nullptr;
    }
    Node* temp= head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<temp->data;
  
}

int main(){
    int n;
    cin>>n;
    Node* head = nullptr;
    while(n--){
        int m;
        cin>>m;
       head =  createatend(head,m);
    }
    print(head);
    cout<<endl;
    int k;
    cin>>k;
   head =  insertathead(head,k);
    print(head);

}