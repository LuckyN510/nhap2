#include<bits/stdc++.h>

using namespace std;

bool check(int n){
    int r = 0, tmp = n;
    while(n != 0){
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r == tmp;
}

int main(){
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(check(a[i][j])){
                ++cnt;
            }
        }
    }
    cout << cnt;
}