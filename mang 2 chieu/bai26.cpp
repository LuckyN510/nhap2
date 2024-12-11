#include<bits/stdc++.h>

using namespace std;

int a[101][101], dp[101][101];
int main(){
    int n; cin >> n; 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
             dp[i][j] = max({dp[i - 1][j + 1], dp[i - 1][j], dp[i - 1][j - 1]}) + a[i][j];
        }
    }
    cout << *max_element(dp[n] + 1, dp[n] + n + 1);
}