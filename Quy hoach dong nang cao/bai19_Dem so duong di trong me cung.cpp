#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int mod = 1e9 + 7;
int F[1001][1001];
char a[1001][1001];
int main()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    F[0][1] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(a[i][j] == '.')
            {
                F[i][j] = F[i - 1][j] + F[i][j - 1];
            }
            else F[i][j] = 0;
            F[i][j] %= mod;
        }
    }
    cout << F[n][n];
}