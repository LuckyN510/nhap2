#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int sum_row = 0, sum_col = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           sum_row += a[i][j];
        }
        cout << sum_row << " ";
        sum_row = 0;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           sum_col += a[j][i];
        }
        cout << sum_col << " ";
        sum_col = 0;
    }
}