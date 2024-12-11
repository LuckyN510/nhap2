#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    int i = 0, j = 0;
    long long res = 0;
    while(i < n && j < m){
        if(a[i] == b[j]){
            int dem1 = 0;
            while(a[i] == b[j]){
                ++i;
                ++dem1;
            }
            int dem2 = 0;
            while(a[i - 1] == b[j]){
                ++j;
                ++dem2;
            }
            res += 1ll * dem1 * dem2;
        }
        else if(a[i] < b[j]){
            ++i;
        }
        else{
            ++j;
        }
    }
    cout << res << endl;
}