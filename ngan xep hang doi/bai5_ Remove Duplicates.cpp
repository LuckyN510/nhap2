#include<bits/stdc++.h>

using namespace std;

void solve(string &s)
{
    stack<char> st;
    string res = "";
    for(char x : s)
    {
        if(!st.empty() && x == st.top())
        {
            st.pop();
        }
        else
        {
            st.push(x);
        }
    }
    while(!st.empty())
    {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    cout << res;
}
int main()
{
    string s; cin >> s;
    solve(s);
}