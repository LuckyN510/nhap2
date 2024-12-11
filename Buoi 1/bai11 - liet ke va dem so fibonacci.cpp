#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll F[100];
void fibo()
{
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= 92; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
}

int find(ll x)
{
    for(int i = 0; i <= 92; i++)
    {
        if(F[i] == x)  return 1;
    }
    return 0;
}

int main()
{
    fibo();
    int n; cin >> n;
    ll a[n];
    for(ll &x : a) cin >> x;
    bool check = 0;
    for(ll x : a)
    {
        if(find(x))
        {
            cout << x << ' ';
            check = 1;
        }
    }
    if(check == 0) cout << "NONE" << endl;
}