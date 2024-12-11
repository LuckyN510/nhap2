#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int n, m;

int main()
{
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }   
    for(int i = 1; i <= n; i++)
    {
        sort(adj[i].begin(), adj[i].end());
        cout << i << ":";
        for(int x : adj[i])
        {
            cout << x << ' ';
        }
        cout << endl;
    } 
}