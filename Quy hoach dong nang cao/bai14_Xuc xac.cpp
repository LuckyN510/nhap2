#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int mod = 1e9 + 7;
int main()
{
	int n; cin >> n;
	int F[n + 1] = {0};
	F[0] = 1;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= 6; j++)
		{
			if(i >= j)
				F[i] += F[i - j];
				F[i] %= mod;
		}
	}
	cout << F[n];
}