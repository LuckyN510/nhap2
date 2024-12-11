#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    ll sum = 0, tich = 1;
    int mod = 1e9 + 7;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        sum %= mod;
        tich *= a[i];
        tich %= mod;
    }
    cout << sum << endl << tich << endl;
}

/*
    5
    1 2 3 4 5

    i = 1 . sum = ((1 % mod) + (2 % mod)) % mod
    i = 2 . sum = (((1 % mod) + (2 % mod)) + (3 % mod)) % mod
    i = 3 . sum = ((((1 % mod) + (2 % mod)) % (3 % mod)) % mod) + (4 % mod)) % mod
    ...........
    Trường hợp TÍCH tương tự
*/
