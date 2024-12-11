#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i = 0; i < n - 2; i++){
        int l = i + 1, r = n - 1;
        while(l < r){
            if(a[l] + a[r] == k - a[i]){
                cout << "YES" << endl;
                return 0;
            }
            else if(a[l] + a[r] < k - a[i]){
                ++l;
            }
            else{
                --r;
            }
        }
    }
    cout << "NO";
}