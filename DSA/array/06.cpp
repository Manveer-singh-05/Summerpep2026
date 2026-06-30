#include <bits/stdc++.h>
using namespace std;
int noofwaystostair(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return noofwaystostair(n-1) + noofwaystostair(n-2); 
}
int main(){
    int n;
    cin>>n;
   cout<< noofwaystostair(n);
}