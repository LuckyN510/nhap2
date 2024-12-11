#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int pos_max = 0, pos_min = 0, min1 = INT_MAX, max1 = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max1)
        {
            max1 = a[i];
            pos_max = i;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] <= min1)
        {
            min1 = a[i];
            pos_min = i;
        }
    }
    cout << pos_min <<' '<< pos_max << endl;
}