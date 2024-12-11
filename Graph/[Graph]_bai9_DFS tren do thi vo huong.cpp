#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1001]; 
bool used[1001];
void DFS(int u)
{
    cout << u << ' ';  
    used[u] = true;    
    for (int v : adj[u]) 
    {
        if (!used[v])   
        {
            DFS(v);  
        }
    }
}

int main()
{
    int n, m, st; 
    cin >> n >> m >> st; 
    
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y; 
        adj[x].push_back(y);
        adj[y].push_back(x); 
    }
    for(int i = 1; i <= n; i++)
    {
        sort(adj[i].begin(), adj[i].end());
    }
    DFS(st); // Start DFS from the starting node
    cout << endl;

    return 0;
}
