#include<bits/stdc++.h>

using namespace std;

string s;
int ok, n;

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

int main()
{
    vector<string> v;
    cin >> n;
    for(int i = 1; i <= n / 2; i++)
    {
        s = string(i, '0');
        ok = 1;
        while(ok)
        {
            string t = s;
            reverse(t.begin(), t.end());
            v.push_back(s + t);
            sinh();
        }
    }
    sort(v.begin(), v.end());
    for(string it : v)
    {
        cout << it << endl;
    }
}