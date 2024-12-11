#include <bits/stdc++.h>

using namespace std;

void solve(string &s, int k)
{
    stack<pair<char, int>> st;
    string res = "";
    for (char x : s)
    {
        if (!st.empty() && x == st.top().first && st.top().second == k - 1)
        {
            st.pop();
        }
        else
        {
            if (st.empty() || x != st.top().first)
            {
                st.push({x, 1});
            }
            else
            {
                st.top().second++;
            }
        }
    }
    while (!st.empty())
    {
        pair<char, int> it = st.top();
        st.pop();
        for (int i = 0; i < it.second; i++)
        {
            res += it.first;
        }
    }
    reverse(res.begin(), res.end());
    cout << res;
}

int main()
{
    string s;
    int k;
    cin >> s >> k;
    solve(s, k);
    return 0;
}
