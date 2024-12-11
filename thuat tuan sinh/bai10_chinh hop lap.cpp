#include<bits/stdc++.h>

using namespace std;

int n, k, x[100], ok;

void ktao()
{
    for(int i = 1; i <= k; i++)
    {
        x[i] = 1;
    }
}

void sinh()
{
    int i = k;
    while(i >= 1 && x[i] == n)
    {
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        x[i]++;
        for(int j = i + 1; j <= k; j++)
        {
            x[j] = 1;
        }

    }
}

int main()
{
    cin >> n >> k;
    ktao();
    ok = 1;
    while(ok)
    {
        for(int j = 1; j <= k; j++)
        {
            cout << x[j];
        }
        cout << endl;
        sinh();
    }
}