#include<bits/stdc++.h>

using namespace std;

int n, k, a[100], ok;

void ktao() {
    for (int i = 1; i <= n; i++) 
    {
        a[i] = 0;
    }
}

void sinh() {
    int i = n;
    while (i >= 1 && a[i] == 1) 
    {
        a[i] = 0;
        --i;
    }
    if (i == 0) ok = 0;
    else a[i] = 1;
}

int main() 
{
    cin >> n;
    ktao();
    ok = 1;
    vector<string> v;
    while(ok) 
    {
        string res = "";
        for (int i = 1; i <= n; i++) 
        {
            if(a[i] == 1)
                res += to_string(i)  + " ";
        }
        if(res != "") v.push_back(res);
        sinh();
    }
    sort(v.begin(), v.end());
    for(string it : v)
    {
        cout << it << endl;
    }
}