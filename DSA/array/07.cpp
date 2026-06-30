#include <bits/stdc++.h>
using namespace std;
bool traverse(int arr[], int n, int key){
    if(n==0){
        return 0;
    }
    if(arr[n]==key){
        return true;
    }
    return (arr+1, n-1,key);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key ;
    cin>>key;
    cout<<traverse(arr,n,key);
}