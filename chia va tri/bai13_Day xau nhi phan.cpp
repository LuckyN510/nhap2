#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;
ll s[100];

void ktao() 
{
    s[1] = 1;
    s[2] = 1;
    for(int i = 3; i <= 92; i++) 
    {
        s[i] = s[i - 1] + s[i - 2];
    }
}

char findPos(ll n, ll k)  
{
    if(n == 1) return '0';
    if(n == 2) return '1';
    if(k <= s[n - 2]) 
    {
        return findPos(n - 2, k);
    } 
    else 
    {
        return findPos(n - 1, k - s[n - 2]);
    }
}

int main() 
{
    ktao();
    ll n, k;
    cin >> n >> k;
    cout << findPos(n, k) << endl;
}
