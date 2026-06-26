#include <bits/stdc++.h>
using namespace std;
int main(){
    // consecutive sum
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        ans.push_back(sum);
    }
    for(int x: ans){
        cout<<x<< " ";
    } 
}