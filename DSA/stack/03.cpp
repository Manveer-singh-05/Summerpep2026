#include <bits/stdc++.h>
using namespace std;
int postfixevl(string n){
    stack<int> st;
    for(int i= 0 ;i<n.size();i++){
        if(n[i]>='0' && n[i]<='9'){
            st.push(n[i]-'0');
        }
        else{
           
            int nums1 = st.top();
            st.pop();
            int nums2 = st.top();
            st.pop();
            switch(n[i]){
                case '+':
                    st.push(nums1+nums2);
                    break;
                case '-':
                    st.push(nums1-nums2);
                    break;
                case '*':
                    st.push(nums1*nums2);
                    break;
                case '/':
                    st.push(nums1/nums2);
                    break;
                case '^':
                    st.push(pow(nums1,nums2));
                    break;
            }

        }
    }
    return st.top();
}
int main(){
    string s = "75+";
    cout<<postfixevl(s);

}