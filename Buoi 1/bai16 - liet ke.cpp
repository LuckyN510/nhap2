#include<bits/stdc++.h>

using namespace std;

bool case1(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}

bool case2(int n)
{
    int lat = 0, tmp = n;
    while(n)
    {
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    return lat == tmp;
}

bool case3(int n)
{
   int can = sqrt(n);
    return can * can == n;
}

bool case4(int n)
{
    int r = 0;
    while(n)
    {
        r += n % 10;
        n /= 10;
    }
    return case1(r);
}

int main()
{
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int dem1 = 0, dem2 = 0, dem3 = 0, dem4 = 0;
    for(int x : a)
    {
        if(case1(x)) dem1++;
        if(case2(x)) dem2++;
        if(case3(x)) dem3++;
        if(case4(x)) dem4++;
    }
    cout << dem1 << endl;
    cout << dem2 << endl;
    cout << dem3 << endl;
    cout << dem4 << endl;

}
