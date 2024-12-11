#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int s; cin >> s;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int l = 0, r;
    int ans = 1e9;
    int sum = 0;
    for(r = 0; r < n; r++){
        sum += a[r];
        while(sum >= s){
            ans = min(r - l + 1, ans);
            sum -= a[l];
            ++l;
        }
    }
    cout << ans;
}
