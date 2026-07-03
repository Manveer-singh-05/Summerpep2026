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
    cout<<head->data;
}