#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int mod = 1e9 + 7;
int F[1001][1001];
int a[1001][1001];

int main()
{
    int n, m; 
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    
    int res = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(a[i][j] == 1)
            {
                if (i == 1 || j == 1)
                    F[i][j] = 1;
                else
                    F[i][j] = min({F[i][j - 1], F[i - 1][j], F[i - 1][j - 1]}) + 1;
                res = max(res, F[i][j]);
            }
            else 
            {
                F[i][j] = 0;
            }
        }
    }
    cout << res;
}
