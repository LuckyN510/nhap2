#include<bits/stdc++.h>

using namespace std;
string s;
int n, ok;

void sinh()
{
    int i = s.length() - 1;
    while(i >= 0 && s[i] == '8')
    {
        s[i] = '6';
        --i;
    }
    if(i == -1) ok = 0;
    else s[i] = '8';
}

int main()
{
    cin >> n;
    vector<string> v; 
    for(int i = 1; v.size() < n; i++) // chu y dieu kien v.size() < n
    {
        s = string(i, '6');
        ok = 1;
        while(ok)
        {
            string t = s;
            reverse(t.begin(), t.end());
            v.push_back(s + t);
            sinh();
        }
    }   
    for(string it : v)
    {
        cout << it << ' ';
    }
}