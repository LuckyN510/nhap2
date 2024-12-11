#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int x, y;
    cin >> x >> y;
    int l = 0;
    int res = -1;
    int dem2 = 0, dem8 = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '8'){
            ++dem8;
        }
        else if(s[i] == '2'){
            ++dem2;
        }
        while(dem2 > x || dem8 > y){
            if(s[l] == '2') dem2--;
            else dem8--;
            ++l;
        }
        res = max(res, dem2 + dem8);
    }
    cout << res;
}