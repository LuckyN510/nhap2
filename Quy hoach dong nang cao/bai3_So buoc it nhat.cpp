#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int dp[n + 1] = {};
    dp[0] = 1;
    for(int i = 1; i < n; i++)
    {
        dp[i] = 1;
        for(int j = 0; j < i; j++)
        {
            if(a[i] >= a[j])
            {
                dp[i] = max(dp[i], 1 + dp[j]);
            }
        }
    }
    cout << n - *max_element(dp, dp + n);
}