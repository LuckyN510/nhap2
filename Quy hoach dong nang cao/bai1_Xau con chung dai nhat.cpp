#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    string s1, s2; cin >> s1 >> s2;
    int n = s1.length();
    int m = s2.length();
    s1 = "0" + s1;
    s2 = "0" + s2;
    int F[n + 1][m + 1];
    for(int i = 0; i <= n; i++)
    {
        F[i][0] = 0;
    }
    for(int j = 0; j <= m; j++)
    {
        F[0][j] = 0;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(s1[i] == s2[j])
            {
                F[i][j] = F[i - 1][j - 1] + 1;
            }
            else
            {
                F[i][j] = max(F[i - 1][j], F[i][j - 1]);
            }
        }
    }
    cout << endl;
   for(int i = 1; i <= n; i++)
   {
            for(int j = 1; j <= m; j++)
        {
            cout << F[i][j] << ' ';
        }
        cout << endl;
   }
}
