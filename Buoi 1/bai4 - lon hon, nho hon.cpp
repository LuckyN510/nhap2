#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int x;
    cin >> x;
    int dem1 = 0, dem2 = 0;
    for(int it : a)
    {
        if(it < x)
        {
            ++dem1;
        }
        else if(it > x)
        {
            ++dem2;
        }
    }
    cout << dem1 << endl << dem2;
}