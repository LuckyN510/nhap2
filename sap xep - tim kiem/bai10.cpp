#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, x; 
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        int fi = lower_bound(a.begin() + i + 1, a.end(), a[i] + x) - (a.begin() + i + 1);
        int ed = upper_bound(a.begin() + i + 1, a.end(), a[i] + x) - (a.begin() + i + 1);
        cnt += ed - fi;
    }
    cout << cnt << endl;
}
