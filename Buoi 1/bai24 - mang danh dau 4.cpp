#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;    
    vector<pair<int, int>> v;
    for(int &x : a)  
    {
        cin >> x;
        mp[x]++;
    }
    
    for(auto &x : mp)
    {
        v.push_back({x.first, x.second});
    }
    
    int max_fre = 0, max_value = 0;
    for(auto &x : v)
    {
        if(x.second > max_fre || (x.second == max_fre && x.first < max_value))
        {
            max_fre = x.second;
            max_value = x.first;
        }
    }
    
    cout << max_value << ' ' << max_fre << endl;
}
