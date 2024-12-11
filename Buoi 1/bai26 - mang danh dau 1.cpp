#include<bits/stdc++.h>

using namespace std;
int d[1000006];
int main()
{
    int n; cin >> n;
    int a[n];
    for(int &x : a)
    {
        cin >> x;
        d[x]++;
    }
    int cnt = 0;
    for(int x : a)
    {
        if(d[x] > 0)
        {
            ++cnt;
            d[x] = 0;
        }
    }
    cout << cnt << endl;
}