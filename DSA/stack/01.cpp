#include <bits/stdc++.h>
using namespace std;

class mystack{
    int *arr;
    int top;
    int size;

public:
    mystack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int val){
        if(top == size - 1){
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop(){
        if(top == -1){
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }

    bool isempty(){
        return top == -1;
    }

    int peek(){
        if(top == -1){
            return -1;
        }
        return arr[top];
    }
};

int main(){
    mystack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.peek() << endl; // 30

    s.pop();

    cout << s.peek() << endl; // 20

    return 0;
}