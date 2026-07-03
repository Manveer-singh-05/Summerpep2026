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
int main(){
    int c;
    cin>>c;
    Node* head = new Node(c);
    Node* h1 = new Node(4);
    head->next = h1;
    cout<<head->data<<endl;
    cout<<head->next->data;
}