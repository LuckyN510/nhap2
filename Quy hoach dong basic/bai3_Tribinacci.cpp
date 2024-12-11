#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll mod = 1e9 + 7;
ll F[1000001];
void Ktao()
{
	F[0] = 0;
	F[1] = 0;
	F[2] = 1;
	for(int i = 3; i <= 1000000; i++)
	{
		F[i] = F[i - 1] + F[i - 2] + F[i - 3];
		F[i] %= mod;
	}
}

int main()
{
	Ktao();
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		cout << F[n] << endl;
	}
}