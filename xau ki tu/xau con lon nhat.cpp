#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    stack<char> st;
    int n = s.length();
    st.push(s[n - 1]);
    for(int i = n - 2; i >= 0; i--){
        if(s[i] >= st.top()){
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
}