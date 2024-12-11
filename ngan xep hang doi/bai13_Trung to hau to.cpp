#include<bits/stdc++.h>

using namespace std;

void solve(string &s)
{
    stack<string> st;
    string res = "";
    for(char x : s)
    {
        if(isalpha(x)) st.push(string(1, x));
        else
        {
            string o1 = st.top(); st.pop();
            string o2 = st.top(); st.pop();
            string tmp = '(' + o2 + x + o1 +')';
            st.push(tmp);
        }
    }
    cout << st.top();
}
int main()
{
    string s; cin >> s;
    solve(s);
}