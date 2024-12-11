#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int pos = -1;
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            pos = i;
            break;
        }  
    }
    if(pos == -1){
        cout << "NOT FOUND";
    }
    else{
        for(int i = pos; i < n - 1; i++){
            a[i] = a[i + 1];
        }
        --n;
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
    }
    
}