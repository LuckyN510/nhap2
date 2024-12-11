#include <bits/stdc++.h>

using namespace std;
using ll = long long;
string s;
int ok;
ll res[301];

void sinh() 
{
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '8') 
    {
        s[i] = '0';
        --i;
    }
    if (i < 0) ok = 0;
    else s[i] = '8';
}

int main() 
{
    s = string(19, '0');
    ok = 1;
    vector<string> v;

    while (ok) 
    {
        v.push_back(s);
        sinh();
    }
    for (int i = 1; i < 301; i++) 
    {
        for (string x : v) 
        {
            ll tmp = stoll(x);
            if (tmp != 0 && tmp % i == 0) 
            {
                res[i] = tmp;
                break;
            }
        }
    }

    int t; cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        cout << res[n] << endl;
    }

    return 0;
}
