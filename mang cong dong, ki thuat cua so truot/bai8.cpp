#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int b[n + 4] = {0};
    while(m--){
        int l, r, d;
        cin >> l >> r >> d;
        --l;
        --r;
        b[l] += d;
        b[r + 1] -= d;
    }
    ll F[n];
    F[0] = b[0];
    for(int i = 1; i < n; i++){
        F[i] = F[i - 1] + b[i];
    }
    for(int i = 0; i < n; i++){
        cout << F[i] << " ";
    }
    // while(k--){
    //     int x, y;
    //     cin >> x >> y;

    // }
}