#include<bits/stdc++.h>
using namespace std;



int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int minn = 1e9;
    for(int i = 0; i < n - 1; i++){
        minn = min(minn, abs(a[i + 1] - a[i]));
    }
    cout << minn;
}