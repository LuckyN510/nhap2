#include<bits/stdc++.h>

using namespace std;
using ll = long long;
ll mod =  1000000000019.;
ll F[1000001];

void Ktao()
{
	F[0] = 0;
	F[1] = 1;
	for(int i = 2; i <= 1000001; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
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
		cout << F[n + 1] << endl;
	}
}