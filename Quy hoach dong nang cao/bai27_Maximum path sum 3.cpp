#include<bits/stdc++.h>

using namespace std;
using ll = long long;
ll F[1001][1001];
ll a[1001][1001];
int main()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[j][i];
        }
    }
    for(int i = 1; i <= n; i++)
    {
        F[0][i] = -1e18;
        F[i][0] =  -1e18;
    }
    for(int i = 1; i <= n; i++)
    {
        F[1][i] = a[1][i];
    }
    for (int i = 2; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            F[i][j] = max({F[i - 1][j], F[i - 1][j + 1], F[i - 1][j - 1]}) + a[i][j];
        }
    }
    cout << *max_element(F[n] + 1, F[n] + 1 + n);
}