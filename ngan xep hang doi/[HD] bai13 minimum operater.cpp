#include<bits/stdc++.h>

using namespace std;

int bfs(int n)
{
    queue<pair<int, int>> q;
    q.push({n, 0});
    set<int> se;
    se.insert(n);
    while(!q.empty())
    {
        pair<int, int> x = q.front();
        q.pop();
        if(x.first == 1) return x.second;
        
        
        if(x.first > 1 && se.count(x.first - 1) == 0)
        {
            q.push({x.first - 1, x.second + 1});
            se.insert(x.first - 1);
        }
        
        int k = x.first;
        for(int i = 2; i <= sqrt(k); i++)
        {
            if(k % i == 0)
            {
                int u = i, v = k / i;
                int tmp = max(u, v);
                if(se.count(tmp) == 0)
                {
                    q.push({tmp, x.second + 1});
                }
            }
        }
    }
    return -1;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << bfs(n) << endl;
    }
}