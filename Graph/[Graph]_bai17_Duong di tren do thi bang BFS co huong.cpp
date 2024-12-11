#include<bits/stdc++.h>

using namespace std;

vector<int> ke[1001];
bool visited[1001];
int parent[1001];

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty())
    {
        int x = q.front(); q.pop();
        for(int y : ke[x])
        {
            if(!visited[y])
            {
                q.push(y);
                visited[y] = true;
                parent[y] = x;
                
            }
        }
    }
}

int main()
{
    int n, m, s, t;
    cin >> n >> m >> s >> t;
    
    for(int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y); 
    }

    for(int i = 1; i <= n; i++)
    {
        sort(ke[i].begin(), ke[i].end());
    }

    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
    
    BFS(s);

    if(!visited[t])
    {
        cout << "-1" << endl;
    }
    else
    {
        vector<int> res;
        while(t != s)
        {
            res.push_back(t);
            t = parent[t];
        }
        res.push_back(s);
        reverse(res.begin(), res.end());
        for(int x : res) cout << x << " ";
        cout << endl;
    }

    return 0;
}
