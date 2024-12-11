#include<bits/stdc++.h>

using namespace std;
 
string s;
int n, ok;

void sinh()
{
    int i = s.length() - 1;
    while(i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        --i;
    }
    if(i == -1) ok = 0;
    else
    {
        s[i] = '1';
    }
}

bool check(string s)
{
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main()
{
    cin >> n;
    s = string(n, '0');
    ok = 1;
    while(ok)
    {
        if(check(s))
        {
            cout << s << endl;
        }
        sinh();  
    }
}