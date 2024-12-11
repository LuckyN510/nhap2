#include <bits/stdc++.h>

using namespace std;

vector<int> v;

void xuly() 
{
    queue<string> q;
    for(int i = 1; i <= 5; i++)
    {
        string tmp = to_string(i);
        q.push(tmp);
    }
    while(!q.empty())
    {
        int d[256] = {0};
        string u = q.front(); q.pop();
        v.push_back(stoi(u));
        for(char c : u)
        {
            d[c] = 1;    // Mảng d[] ko lưu lại kết quả ở vòng lặp trước đó
        }
        for(char c = '0' ; c <= '5'; c++)
        {
            if(d[c] == 0)
            {
                q.push(u + c);
            }
        }
    }
}

void solve(int l, int r) 
{
    int cnt = 0;
    for (int x : v) {
        if (x > r) break;
        if (x >= l) cnt++;
    }
    cout << cnt << endl;
}

int main() 
{
    int t;
    cin >> t;
    xuly();
    while (t--)
    {
        int L, R;
        cin >> L >> R;
        solve(L, R);
    }
}
