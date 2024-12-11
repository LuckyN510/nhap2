#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n; 
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bool check = 0;
    for(int i = 0; i <= n / 2; i++){
        if(a[i] != a[n - i - 1]){
            check = 1;
        }
    }
    if(check) cout << "NO";
    else cout << "YES";
}