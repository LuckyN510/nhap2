#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll F[101][101][101];

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int n = s1.length();
    int m = s2.length();
    int p = s3.length();
    s1 = "0" + s1;
    s2 = "0" + s2;
    s3 = "0" + s3;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            for (int k = 1; k <= p; k++)
            {
                if (s1[i] == s2[j] && s1[i] == s3[k])
                {
                    F[i][j][k] = F[i - 1][j - 1][k - 1] + 1;
                }
                else
                {
                    F[i][j][k] = max({
                        F[i - 1][j][k],
                        F[i][j - 1][k],
                        F[i][j][k - 1]
                    });
                }
            }
        }
    }

    cout << F[n][m][p];
}
