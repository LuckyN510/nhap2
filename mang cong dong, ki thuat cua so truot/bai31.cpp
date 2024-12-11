#include<bits/stdc++.h>
using namespace std;


// Cho dãy số A[] gồm có N phần tử và số nguyên dương k. Hãy tìm dãy con liên tiếp
// có k phần tử sao cho dãy con đó có tổng các phần tử lớn nhất.

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < k; i++){
        sum += a[i];
    }
    int res = -1e9;
    int pos = 0;
    for(int i = k; i < n; i++){
        sum = sum - a[i - k] + a[i];
        if(sum > res){
            res = sum;
            pos = i - k + 1;//72 104 40 99 i lúc này ở vị trí số 99
        }
    }
    cout << res << endl;
    for(int i = 0; i < k; i++){
        cout << a[pos + i] << " ";
    }
}