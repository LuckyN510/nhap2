#include<bits/stdc++.h>

using namespace std;
int main(){
    int n, s;
    cin >> n >> s;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long sum = 0;
    int l = 0, cnt = 0;
    for(int r = 0; r < n; r++){
        sum += a[r];
        while(sum >= s){
            cnt += n - r;
            sum -= a[l];
            ++l;
        }
    }
    cout << cnt << endl;

}