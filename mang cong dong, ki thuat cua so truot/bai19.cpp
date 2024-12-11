#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int res = 0;
    int l = 0;
    multiset<int> ms;
    for(int r = 0; r < n; r++){
        ms.insert(a[r]);
        while(ms.size() >= 1 && (*ms.rbegin() - *ms.begin()) > k){
            auto it = ms.find(a[l]);
            ms.erase(it);
            ++l;
        }
        res += r - l + 1;
    }
    cout << res << endl;
}