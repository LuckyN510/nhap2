#include<bits/stdc++.h>

using namespace std;
using ll = long long;
// day con lien tiep co tong >= s
int main(){
    int n, s;
    cin >> n >> s;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int j = 0, ans = 1e9;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        while(sum >= s){
            ans = min(ans, i - j + 1);
            sum -= a[j];
            ++j;
        }
    }
    cout << ans << endl;
}