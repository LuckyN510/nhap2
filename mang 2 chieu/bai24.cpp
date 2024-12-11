#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int a[n + 1][n + 1];
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    int d[101] = {0};
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
           if(d[a[i][j]] == i - 1){
                d[a[i][j]] = i;
           }
        }
    }
    int cnt = 0;
    for(int i = 1; i < 100; i++){
        if(d[i] == n){
            ++cnt;
            cout << i << " ";
        }
    }
    if(!cnt){
        cout << "NOT FOUND";
    }
}