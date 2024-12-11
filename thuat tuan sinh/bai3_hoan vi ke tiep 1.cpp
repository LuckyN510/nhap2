#include<bits/stdc++.h>

using namespace std;

int n, a[100], ok;

void solve()
{
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1])
    {
        --i;
    }
    if(i == 0)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << j << ' ';
        }
    }
    else
    {
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n);
        for(int j = 1; j <= n; j++)
        {
            cout << a[j] << ' ';
        }
    }
}
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    solve();
}