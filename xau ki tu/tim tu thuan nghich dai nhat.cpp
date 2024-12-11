#include<bits/stdc++.h>

using namespace std;

bool check(string s){
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main(){
    string s;
    map<string, int> fred;
    vector<string> v;
    while(cin >> s){
        v.push_back(s);
        fred[s]++;
    }
    map<string, int> mp2;
    int max_len = -1e9;
    int max_fre = -1e9;
    for(auto x : v){
        if(check(x)){
            int len = x.size();
            if(len >= max_len){
                max_len = len;
                mp2[x] = fred[x];
            }
        }
    } 
    for(auto x : mp2){
        if(x.first.size() == max_len){
            cout << x.first << " " << x.second << endl;
        }
    }
}

/*

AAA BAABA HDHDH ACBSD SRGTDH DDDDS
DUAHD AAA AD DA HDHDH AAA AAA AAA AAA
DDDAS HDHDH HDH AAA AAA AAA AAA AAA
AAA AAA AAA
DHKFKH DHDHDD HDHDHD DDDHHH HHHDDD
TDTD

*/