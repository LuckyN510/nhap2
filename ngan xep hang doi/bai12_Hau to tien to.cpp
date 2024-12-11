#include<bits/stdc++.h>

using namespace std;

void solve(string &s)
{
    stack<string> st;  
    int n = s.length();
    for(int i = 0; i < n; i++)
    {
        if(isalpha(s[i]))
        {
            st.push(string(1, s[i]));
        }
        else
        {
            string operand1 = st.top(); st.pop();
            string operand2 = st.top(); st.pop();
            string tmp = s[i] + operand2 + operand1;
            st.push(tmp);
        }
    }
    cout << st.top() << endl;
}
int main()
{
    string s; cin >> s;
    solve(s);
}