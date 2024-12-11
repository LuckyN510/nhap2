#include<bits/stdc++.h>
using namespace std;


// Cho mảng A[] gồm N phần tử và số nguyên K, nhiệm vụ của bạn là in ra số lớn 
//nhất và nhỏ nhất của mọi mảng con cỡ K của mảng A[]

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