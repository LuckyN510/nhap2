#include<bits/stdc++.h>

using namespace std;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int n, m, s, t;
int a[101][101];
int cnt = 0;

void loang(int i, int j){
    ++cnt;
    a[i][j] = 1;
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 0){
            loang(i1, j1);
        }
    }
}
int main(){
    cin >> n >> s >> t;
    m = n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    loang(s, t);
    cout << cnt << endl;
}