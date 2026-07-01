#include <bits/stdc++.h>
using namespace std;
void reverse(string s){
    int n=s.size()-1;
    int left = 0;
    while(left<n){
        swap(s[left],s[n]);
        left++;
        n--;

    }
    cout<<s;
}
int main(){
   string n;
   getline(cin,n);
   reverse(n);
}