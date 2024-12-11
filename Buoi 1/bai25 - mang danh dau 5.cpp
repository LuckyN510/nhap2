#include <bits/stdc++.h>

using namespace std;

int cnt[1000006];
int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<pair<int, int>> v; 
    for(int &x : a)  
    {
        cin >> x;
        cnt[x]++;
    }
    
    for(auto x : a)
    {
        v.push_back({x, cnt[x]});
    }
    int max_fre = 0, max_value = 0;
    for(auto x : v)
    {
        if(x.second > max_fre)
        {
            max_fre = x.second;
            max_value = x.first;
        }
    }
    cout << max_value << ' ' << max_fre << endl;
}
