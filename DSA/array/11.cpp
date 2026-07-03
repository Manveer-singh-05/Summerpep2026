#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag = false;
    for(int i=2; i*i<=n;i++){
        if(i==n){
            continue;
        }
        if(n%i==0){
           flag = true;
           
        }
    }
    if(flag){
        cout<<"not prime";
    }
    else{
        cout<<"prime";
    }
return 0;
}