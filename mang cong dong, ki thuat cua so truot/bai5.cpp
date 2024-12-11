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
    int d[n + 1];
    d[0] = a[0];
    for(int i = 1; i < n; i++){
        d[i] = a[i] - a[i - 1];
    }
    while(q--){
        int l, r, k;
        cin >> l >> r >> k;
        d[l] += k;
        d[r + 1] -= k;

    }
    ll F[n];
    F[0] = d[0];
    for(int i = 1; i < n; i++){
        F[i] = F[i - 1] + d[i]; 
    }
    for(int i = 0; i < n; i++){
        cout << F[i] << " ";
    }
}