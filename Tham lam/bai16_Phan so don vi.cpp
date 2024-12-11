#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, m, n, x;
    cin >> a >> b;
    while(b % a != 0)
    {
        n = a;
        m = b;
        x = b / a;
        cout << 1 << '/' << x + 1 << '+';
        a = (x + 1) * n - m;
        b = (x + 1) * b;
    }
    cout << 1 << '/' << b / a;
    cout << endl;
}