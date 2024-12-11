#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int n , a[100], x[100], ok;
ll res = 1e18;

void sinh()
{
    int i = n;
    while(i >= 1 && x[i] == 1)
    {
        x[i] = 0;
        --i;
    }
    if(i == 0) ok = 0;
    else x[i] = 1;
}
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ok = 1;
    while(ok)
    {
        ll sum1 = 0, sum0 = 0;
        for(int j = 1; j <= n; j++)
        {
            if(x[j] == 1) sum1 += a[j];
            else sum0 += a[j];
        }
        res = min(res, abs(sum1 - sum0));
        sinh();
    }
    cout << res;
}
