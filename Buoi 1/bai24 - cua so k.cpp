#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int sum = 0;
    vector<int> v;
    for(int i = 0; i < k; i++) 
    {
        sum += a[i];
    }
    v.push_back(sum);
    for(int i = k; i < n; i++)
    {
        sum = sum - a[i - k] + a[i];
        v.push_back(sum);
    }
    for(int it : v)
    {
        cout << it << ' ';
    }

}