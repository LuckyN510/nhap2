#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t; cin >> t;
    int n;
    queue<ll> q;
    q.push(8);
    vector<ll> v;
    v.push_back(8);
    while(1)
    {
        ll u = q.front(); q.pop();
        if(u > 1e18) break;
        v.push_back(u);
        q.push(u * 10);
        q.push(u * 10 + 8);

    }
    while(t--)
    {
        cin >> n;       
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] % n == 0)
            {
                cout << v[i] << endl;
                break;
            }
        }
    }
}