#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int findPos(int a[], int b[], int n)
{
    int l = 0, r = n - 2, res = -1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == b[m])
        {
            l = m + 1;
        }
        else
        {
            res = m;
            r = m - 1;

        }
    }
    return res;
}
int main()
{
    int n; cin >> n;
    int a[n], b[n - 1];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n - 1; i++) cin >> b[i];
    cout << findPos(a, b, n);
}