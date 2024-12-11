#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
    string s; cin >> s;
    int n = s.length();
    s = "0" + s;
    bool F[n + 1][n + 1];
    memset(F, false, sizeof(F));
    for(int i = 1; i <= n; i++)
    {
        F[i][i] = true;
    }
    int res = 1;
    for(int len = 2; len <= n; len++)
    {
        for(int i = 1; i <= n - len + 1; i++)
        {
            int j = i + len - 1;
            if(len == 2 && s[i] == s[j] ) F[i][j] = true;
            else
            {    
                F[i][j] = F[i + 1][j - 1] && s[i] == s[j];
            }
            if(F[i][j] == true)
            {
                res = max(res, len); 
            }   
        }
    }
    cout << res;
}