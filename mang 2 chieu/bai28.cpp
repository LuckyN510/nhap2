#include<bits/stdc++.h>
using namespace std;

int a[101][101], dp[101][101];

int main() {
    int n; 
    cin >> n; 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + a[i][j];
        }
    }
    int res = INT_MIN; 
    for (int i = 3; i <= n; i++) {
        for (int j = 3; j <= n; j++) {
            int sum = dp[i][j] - dp[i - 3][j] - dp[i][j - 3] + dp[i - 3][j - 3];
            res = max(res, sum);
        }
    }
    cout << res;
    return 0;
}
