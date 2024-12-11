#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s, t;
        cin >> s >> t;
        int n1 = s.length();
        int n2 = t.length();
        if(n1 != n2){
            cout << max(n1, n2) << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
}