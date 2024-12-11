#include<bits/stdc++.h>

using namespace std;

int a[100], n, k, ok, dem;
set<int> se;

void ktao()
{
    for(int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = k;
    while(i >= 1 && a[i] == n - k + i)
    {
        --i;
    }
    if(i == 0) cout << k;
    else
    {
        a[i]++;
        for(int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
        for(int j = 1; j <= k; j++)
        {
            if(se.count(a[j]))
            {
                ++dem;
            }
        }
        cout << k - dem;
    }
}

int main()
{
    cin >> n >> k;
    for(int i = 1; i <= k; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
    }
    sinh();
}