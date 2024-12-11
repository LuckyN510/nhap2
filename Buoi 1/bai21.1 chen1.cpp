#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, x;
    cin >> n >> k >> x;
    int a[n];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> v;
    for(int i = 1; i < x; i++)
    {
        v.push_back(a[i]);
    }
    v.push_back(k);
    for(int i = x ; i <= n; i++)
    {
        v.push_back(a[i]);
    }
    for(int it : v)
    {
        cout << it << ' ';
    }
}