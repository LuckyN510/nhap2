#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int q; cin >> q;
    while(q--){
        int m; cin >> m;
        if(binary_search(a, a + n, m)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}