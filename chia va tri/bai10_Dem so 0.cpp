#include<bits/stdc++.h>

using namespace std;

int first_pos(int a[], int n)
{
    int l = 0, r = n - 1, res = -1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == 1)
        {
            res = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return res;
}
int main()
{
    int n; cin >>n;
    int a[n];
    for(int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << first_pos(a, n);
}