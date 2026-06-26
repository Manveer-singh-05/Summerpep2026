#include <bits/stdc++.h>
using namespace std;
int main(){
    // give the xor of the maximum element of the given size window k this is the problem statement
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int sum = 0;
    for(int i=0;i<k;i++){
        sum+= arr[i];
    }
    int left = 0 ;
    int right = k-1;
    int maxi  =INT_MAX;
    vector<int>ans;
    while(right < n){

    int mini = INT_MAX;
    int maximum;

    for(int i = left; i <= right; i++){

        if(sum - arr[i] < mini){
            mini = sum - arr[i];
            maximum = arr[i];
        }

    }

    ans.push_back(maximum);

    sum -= arr[left];
    left++;
    right++;

    if(right < n)
        sum += arr[right];
}
    int answer = 0;
    for(int x: ans){
        answer^=x;
    }
    cout<<answer;

}