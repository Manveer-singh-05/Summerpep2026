#include <bits/stdc++.h>
using namespace std;
int fibinacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibinacci(n-1) + fibinacci(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<< fibinacci(n);
}