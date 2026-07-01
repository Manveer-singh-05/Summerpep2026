#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;
void rowsum(int arr[][MAX], int n,int m){
    int sum = 0;
    int maxi = INT_MIN;
    int index = -1;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){

            sum += arr[i][j];
        }
        if(maxi<=sum){
            maxi = sum;
            index = i;
        }

        cout<<sum<<endl;
        sum  = 0;

    }
    cout<<maxi<<endl;
    cout<<index;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[MAX][MAX];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    // int t ;
    // cin>>t;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(arr[i][j]==t){
    //             cout<<"YES"<<endl;
    //             return 0;
    //         }
    //     }
    // }
    rowsum(arr,n, m);
    return 0;

    // cout<<"NO"<<endl;
}