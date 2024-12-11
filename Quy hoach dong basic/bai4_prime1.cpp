#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const int maxn = (int)1e6;

int prime[maxn + 1];

void sang()
{
	for(int i = 0; i <= maxn; i++)
	{
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(maxn); i++)
	{
		if(prime[i])
		{
			for(int j = i * i; j <= maxn; j += i)
			{
				prime[j] = 0;
			}
		}
	}
}

int F[1000001];

int main()
{
	sang();
	int dem = 0;
	for(int i = 0; i <= 1000001; i++)
	{
		if(prime[i])
		{
			++dem;
		}
		F[i] = dem;
	}
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		cout << F[n] << endl;
	}
}