#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        stringstream ss(s);
        string num;
        vector<int> v;
        while(ss >> num){
            v.push_back(stoi(num));
        }
        int cnt_chan = 0, cnt_le = 0;
        for(int x : v){
            if(x % 2 == 0){
                ++cnt_chan;
            }
            else{
                ++cnt_le;
            }
        }
        if((v.size() % 2 == 0 )||( cnt_chan > cnt_le && v.size() % 2 != 0)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}