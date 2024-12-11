#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        string tmp = "";
        while(ss >> word){
            reverse(word.begin(), word.end());
            tmp += word + " ";
        }
        cout << tmp << endl;;
    }
}