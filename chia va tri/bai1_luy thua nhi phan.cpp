#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int mod = 1e9 + 7;

int powMod(int n, int k)
{
    if(n == 0) return 1;
    ll x = pow(n, k / 2);
    if(n % 2 == 0) return x * x % mod;
    else return ((x * x % mod) *  (n % mod)) % mod;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << powMod(n, k);
}