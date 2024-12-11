#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int min_pos = j;
            for(int k = j + 1; k < n; k++){
                if(a[i][k] < a[i][min_pos]){
                    min_pos = k;
                }
            }
            swap(a[i][min_pos], a[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}