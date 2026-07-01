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
void spiral(int arr[][MAX], int n, int m){
    int i = 0;
    for(int j=0;j<m;j++){
        if(i==0){
            while(i<n){
                cout<<arr[i][j]<<" ";
                i++;
            }
            i=  n-1;
        }
        else{
            while(i>=0){
                cout<<arr[i][j]<<" ";
                i--;
            }
            i=0;
        }
    }
}




void spiral1(int arr[][MAX], int n, int m) {
    int toprow = 0;
    int bottomrow = n - 1;
    int leftcol = 0;
    int rightcol = m - 1;

    while (toprow <= bottomrow && leftcol <= rightcol) {

        // Top row
        for (int i = leftcol; i <= rightcol; i++) {
            cout << arr[toprow][i] << " ";
        }
        toprow++;

        // Right column
        for (int i = toprow; i <= bottomrow; i++) {
            cout << arr[i][rightcol] << " ";
        }
        rightcol--;

        // Bottom row
        if (toprow <= bottomrow) {
            for (int i = rightcol; i >= leftcol; i--) {
                cout << arr[bottomrow][i] << " ";
            }
            bottomrow--;
        }

        // Left column
        if (leftcol <= rightcol) {
            for (int i = bottomrow; i >= toprow; i--) {
                cout << arr[i][leftcol] << " ";
            }
            leftcol++;
        }
    }
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
    // rowsum(arr,n, m);

    // spiral(arr,n,m);
    spiral1(arr,n,m);
    return 0;

    // cout<<"NO"<<endl;
}