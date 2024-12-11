#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int findPos(int a[], int n, int x)
{
    int l = 0, r = n - 1, res = -1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] <= x)
        {
            res = m;
           	l = m + 1;
        }
        else r = m - 1;
    }
    return res;
}
int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    cout << findPos(a, n, k) + 1;
}