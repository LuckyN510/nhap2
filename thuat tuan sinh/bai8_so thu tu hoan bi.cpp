#include<bits/stdc++.h>

using namespace std;
int n, a[100], x[100], ok;

void sinh()
{
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1])
    {
        --i;
    } 
    if(i == 0) ok = 0;
    else
    {
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

bool check()
{
     for(int i = 1; i <= n; i++)
    {
        if(x[i] != a[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x[i];
        a[i] = i;
    }
    ok = 1;
    int cnt = 1;
    while(ok)
    {
        if(check())
        {
            cout << cnt; break;
        }
        sinh();
        ++cnt;
    }

}