#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int tinh(int n, ll k)
{
    ll x = pow(2, n - 1);
    if (x == k) return n;
    if (k > x) return tinh(n - 1, k - x);
    else return tinh(n - 1, k);
}

int main()
{
    int n;
    ll k;
    cin >> n >> k;
    cout << tinh(n, k) << endl;
    return 0;
}
