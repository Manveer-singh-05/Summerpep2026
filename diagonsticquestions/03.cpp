#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 // in a circular way replace the current element with the next greater element this is the question
    vector<int>ans(n,-1);
    for(int i=0;i<n;i++){
        int j = (i+1)%n;
        while(j!=i){
            if(arr[j] > arr[i]){
                 ans[i] = (arr[j]);  
                 break;
            }
            j = (j+1)%n;

        }

    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}