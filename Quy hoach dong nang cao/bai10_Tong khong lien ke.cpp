#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll F[1000001];

int main()
{
	int n; cin >> n;
	int a[n + 1];
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	F[1] = 1;
	for(int i = 2; i <= n; i++)
	{
		F[i] = max(F[i - 2] + a[i], F[i - 1]);
	}
	cout << F[n] << endl;
}