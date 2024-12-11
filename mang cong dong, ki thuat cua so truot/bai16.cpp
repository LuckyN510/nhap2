#include<bits/stdc++.h>

using namespace std;
// dem so mang con cac phan tu lien tiep trong mang khong vuot qua s
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
        while(sum > s){
            sum -= a[l];
            ++l;
        }
        cnt += r - l + 1;
    }
    cout << cnt << endl;

}