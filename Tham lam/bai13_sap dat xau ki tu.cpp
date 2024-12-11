#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int d[256] = {0};
    int max_fre = 0;
    for(char c : s)
    {
        d[c]++;
        max_fre = (max_fre, d[c]);
    }
    int n = s.length();
    if(max_fre <= (n - 1) / 2 + 1) cout << "YES";
    else cout << "NO";
}