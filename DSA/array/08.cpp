#include <bits/stdc++.h>
using namespace std;
bool traverse(int arr[],  int left , int right, int key){
    int mid = left + (right - left) /2;
    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid]<key){
        return traverse(arr,mid+1, right, key);
    }
    else{
        return traverse(arr,left, mid-1, key);
    }
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
    cout<<traverse(arr,0,n-1,key);
    
}