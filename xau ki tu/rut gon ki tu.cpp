#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    stack<char> st;
    for(int i = s.length() - 1; i >= 0; i--){
        if(!st.empty() && s[i] == st.top()){
                st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    if(!st.empty()){
        while(!st.empty()){
            cout << st.top() << endl;
            st.pop();
        }
    }
    else{
        cout << "EMPTY STRING" << endl;
    }
}