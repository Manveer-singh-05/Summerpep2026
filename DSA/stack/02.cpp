#include <bits/stdc++.h>
using namespace std;
int prefixEval(string s){
    stack <int> st;
    for(int i=s.size()-1; i>=0 ; i--){
        if(s[i]>='0' && s[i]<= '9'){
            st.push(s[i]-'0');
        }
        else{
            int nums1 = st.top();
            st.pop();
            int nums2 = st.top();
            st.pop();
            switch(s[i]){
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
    string s = "-+7*45+20";
   cout<< "The output of the prefix is : " << prefixEval(s);

}