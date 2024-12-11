#include<bits/stdc++.h>

using namespace std;

int n, x[100], ok, a[100];
int res = -1e9;
void solve()
{
    int sum = a[1];
    for(int i = 1; i <= n; i++)
    {
        if(x[i] == 1) sum += a[i + 1];
        else sum -= a[i + 1];
    }
    res = max(res, sum);
}
void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if(i == n) solve();
        else Try(i + 1);
    }
}
int main()
{
    for(int i = 1; i <= 4; i++)
    {
        cin >> a[i];
    }
    n = 3;
    Try(1);
    cout << res;
}