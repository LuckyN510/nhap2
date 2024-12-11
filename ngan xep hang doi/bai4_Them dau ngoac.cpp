#include<bits/stdc++.h>

using namespace std;

void solve(string &s)
{
    stack<char> st;
    int cnt = 0;
    for(char x : s)
    {
        if(x == '(')
        {
            st.push(x);
        }
        else
        {
            if(!st.empty()) st.pop();
            else ++cnt;
        }
    }
    cnt += st.size();
    cout << cnt;
}
int main()
{
    string s; cin >> s;
    solve(s);
}