#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int mod = 1e9 + 7;
int F[1000001];
int main()
{
	int n, x;
	cin >> n >> x;
	int a[n + 1];
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	F[0] = 1;
	for(int i = 1; i <= x; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i >= a[j])
				F[i] += F[i - a[j]];
				F[i] %= mod;
		}
	}
	cout << F[x];
}
