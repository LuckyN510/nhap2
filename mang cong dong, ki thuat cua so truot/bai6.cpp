#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, q;
    cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int d[n + 1] = {0}; // dem tan suat truy van
    while(q--){
        int l, r;
        cin >> l >> r;
        --l; --r;
        d[l] += 1;
        d[r + 1] -= 1;
    }
    ll F[n];
    F[0] = d[0];
    for(int i = 1; i < n; i++){
        F[i] = F[i - 1] + d[i]; 
    }
    sort(a, a + n, greater<int>());
    sort(F, F + n, greater<ll>());
    int res = 0;
    for(int i = 0; i < n; i++){
        res += 1ll * a[i] * F[i];
    }
    cout << res;
}