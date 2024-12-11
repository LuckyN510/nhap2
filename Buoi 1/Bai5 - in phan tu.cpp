#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int found = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0 && i % 2 == 0)
        {
            cout << a[i] << ' ';
            found = 1;
        }
    }
    if(found == 0) cout << "NONE";
}
