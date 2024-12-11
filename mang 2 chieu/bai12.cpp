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
     for (int j = 0; j < n; j++) { 
        for (int i = 0; i < n - 1; i++) { 
            for (int k = i + 1; k < n; k++) {
                if (a[k][j] < a[i][j]) {
                    swap(a[k][j], a[i][j]); 
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
