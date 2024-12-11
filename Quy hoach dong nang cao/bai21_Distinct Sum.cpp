#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; 
    cin >> n;
    vector<int> a(n + 1);
    int s = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    vector<bool> F(s + 1, false);
    F[0] = true;
    for(int i = 1; i <= n; i++)
    {
        for(int j = s; j >= a[i]; j--)
        {
            if(F[j - a[i]] == true)
                F[j] = true;
        }
    }
    for(int i = 0; i <= s; i++)  
    {
        if(F[i])
            cout << i << ' ';
    }
}
