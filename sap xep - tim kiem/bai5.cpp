#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    int max_fre = 0;
    for(auto x : mp){
        if(max_fre < x.second){
            max_fre = x.second;
        }
    }
    for(auto x : mp){
        if(x.second == max_fre){
            cout << x.first << " ";
        }
    }
}