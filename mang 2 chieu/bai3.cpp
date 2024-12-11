#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int minVal = 1e9, maxVal = -1e9;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            minVal = min(minVal, a[i][j]);
            maxVal = max(maxVal, a[i][j]);
        }
    }
    cout << minVal << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(minVal == a[i][j]){
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
    cout << maxVal << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(maxVal == a[i][j]){
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
}