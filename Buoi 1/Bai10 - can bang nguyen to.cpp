#include<bits/stdc++.h>

using namespace std;

int nt(int n)
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

int main()
{
    int n; cin >> n;
	int a[n];
	for(int &x : a)	cin >> x;
    int sum = 0, sum_letf = a[0];
    for(int x : a)
    {
        sum += x;
    }
    for(int i = 1; i < n - 1; i++)
    {
        int sum_righ = sum - sum_letf - a[i];
        if(nt(sum_letf) && nt(sum_righ))
        {
            cout << i << ' ';
        }
        sum_letf += a[i];
    }
}