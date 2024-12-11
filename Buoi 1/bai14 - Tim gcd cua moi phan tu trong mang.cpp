#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    while(b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int res = a[0];
    for(int i = 0; i < n; i++)
    {
        res = gcd(res, a[i]);
    }
    cout << res;
}